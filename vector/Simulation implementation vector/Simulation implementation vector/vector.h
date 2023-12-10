#pragma once
#include<assert.h>
namespace byte
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		void resize(size_t n, T val = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			else {
				if (n < capacity())
					reserve(n);
				while (_finish != _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}
		}

		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _end_of_storage(nullptr)
		{}

		vector(size_t n, const T& value = T())
			: _start(nullptr)
			, _finish(nullptr)
			, _end_of_storage(nullptr)
		{
			reserve(n);
			while (n--)
			{
				push_back(value);
			}
		}

		vector(int n, const T& val = T())
		{
			reserve(n);
			for (int i = 0; i < n; ++i)
			{
				push_back(val);
			}
		}

		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		~vector()
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}
		
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t sz = size();
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T) * size());
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}

		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}
			*_finish = x;
			++_finish;
		}

		void pop_back(const T& x)
		{
			assert(!empty());
			--_finish;
		}

		void insert(iterator pos, const T& val)
		{
			assert(pos >= _start);
			assert(pos <= _finish);
			
			if (_finish == _end_of_storage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capacity() * 2);
				pos = _start + len;
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = val;
			++_finish;
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);
			iterator start = pos + 1;
			while (start != _finish)
			{
				*(start - 1) = *start;
				++start;
			}
			--_finish;

			return pos;
		}

		size_t capacity() const
		{
			return _end_of_storage - _start;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		bool empty()
		{
			return _start == _finish;
		}
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos) const
		{
			assert(pos < size());
			return _start[pos];
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};


	void func(const vector<int>& v)
	{
		for (size_t i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		vector<int>::const_iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl << endl;
	}

	void test1()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		for (size_t i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;

		vector<int>::iterator it = v1.begin();
		while (it != v1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test2()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);

		cout << v1.size() << endl;
		cout << v1.capacity() << endl;

		v1.resize(10);

		cout << v1.size() << endl;
		cout << v1.capacity() << endl;

		func(v1);

		v1.resize(3);

		func(v1);
	}

	void test3()
	{
		std::vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		//v1.push_back(5);
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		/*v1.insert(v1.begin(), 0);
		for (auto e : v1)
		{
		cout << e << " ";
		}
		cout << endl;*/

		auto pos = find(v1.begin(), v1.end(), 3);
		if (pos != v1.end())
		{
			//v1.insert(pos, 30);
			pos = v1.insert(pos, 30);
		}

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		// insert以后我们认为pos失效了，不能再使用
		(*pos)++;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test4()
	{
		std::vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		//auto pos = find(v1.begin(), v1.end(), 2);
		auto pos = find(v1.begin(), v1.end(), 4);
		if (pos != v1.end())
		{
			v1.erase(pos);
		}

		(*pos)++;

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

	}

	void test5()
	{
		byte::vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		//要求删除所有偶数
		byte::vector<int>::iterator it = v1.begin();
		while (it != v1.end())
		{
			if (*it % 2 == 0)
			{
				it=v1.erase(it);
			}
			else
			{
				++it;
			}
		}

		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test6()
	{
		vector<int> v1(10, 5);
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<int> v2(v1.begin() + 1, v1.end() - 1);
		for (auto e : v2)
		{
			cout << e << " ";
		}
		cout << endl;

		std::string s1("hello");
		vector<int> v3(s1.begin(), s1.end());
		for (auto e : v3)
		{
			cout << e << " ";
		}
		cout << endl;

		int a[] = { 100, 10, 2, 20, 30 };
		vector<int> v4(a, a + 3);
		for (auto e : v4)
		{
			cout << e << " ";
		}
		cout << endl;

		v1.insert(v1.begin(), 10);
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}