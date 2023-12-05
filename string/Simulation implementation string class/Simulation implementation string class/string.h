#pragma once
#include<cstring>
#include<cassert>

#include<iostream>
using namespace std;
//namespace hbr {
//	class string {
//	public:
//		//整合到下面
//		/*string()
//			:_str(new char[1]), _size(0), _capacity(0)
//		{
//			_str[0] = '\0';
//		}*/
//		//string(const char* str)
//		//	:_str(str),_size(strlen(str)),_capacity(strlen(str))
//		//{}
//		//string(const char* str = nullptr)  不可以
//		//string(const char* str = '\0')
//		//string(const char* str = "\0")
//		string(const char* str="")//默认\0
//			:_size(strlen(str))
//		{
//			_capacity = _size;
//			_str = new char[_capacity + 1];
//			strcpy(_str, str);
//		}
//
//		const char& operator[](size_t pos) const
//		{
//			assert(pos < _size);
//			return _str[pos];
//		}
//
//		char& operator[](size_t pos)
//		{
//			assert(pos < _size);
//			return _str[pos];
//		}
//		
//		string(const string& s)
//			:_size(s._size),_capacity(s._capacity)
//		{
//			_str = new char[s._capacity + 1];
//			strcpy(_str, s._str);
//		}
//
//		size_t size() const
//		{
//			return _size;
//		}
//
//		string& operator=(const string& s)
//		{
//			if (this != &s) {
//				/*delete[] _str;
//				_str = new char[s._capacity];
//				strcpy(_str, s._str);
//				_size = s._capacity;
//				_capacity = s._capacity;*/
//
//				char* tmp = new char[s._capacity + 1];
//				strcpy(tmp, s._str);
//				delete[] _str;
//				_str = tmp;
//				_size = s._size;
//				_capacity = s._capacity;
//			}
//			return *this;
//		}
//
//		typedef char* iterator;
//		typedef const char* const_iterator;
//
//		iterator begin()
//		{
//			return _str;
//		}
//
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		const_iterator begin() const
//		{
//			return _str;
//		}
//
//		const_iterator end() const
//		{
//			return _str + _size;
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
////void test_string1()
////{
////	string s1;
////	string s2("hello world");
////
////	cout << s1.c_str() << endl;
////	cout << s2.c_str() << endl;
////
////	s2[0]++;
////
////	cout << s1.c_str() << endl;
////	cout << s2.c_str() << endl;
////}
////
////void test_string2()
////{
////	string s1;
////	string s2("hello world");
////
////	string s3(s2);
////	cout << s2.c_str() << endl;
////	cout << s3.c_str() << endl;
////
////	s2[0]++;
////	cout << s2.c_str() << endl;
////	cout << s3.c_str() << endl;
////
////	s1 = s3;
////	cout << s1.c_str() << endl;
////	cout << s3.c_str() << endl;
////
////	s1 = s1;
////	cout << s1.c_str() << endl;
////	cout << s3.c_str() << endl;
////}


namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}

		/*	string()
				:_str(new char[1])
				, _size(0)
				, _capaicty(0)
				{
				_str[0] = '\0';
				}*/

				//string(const char* str = nullptr)  不可以
				//string(const char* str = '\0')	 不可以
				//string(const char* str = "\0")	 可以
		string(const char* str = "")
			:_size(strlen(str))
		{
			_capaicty = _size == 0 ? 3 : _size;
			_str = new char[_capaicty + 1];
			strcpy(_str, str);
		}

		// s3(s2)
		string(const string& s)
			:_size(s._size)
			, _capaicty(s._capaicty)
		{
			_str = new char[s._capaicty + 1];
			strcpy(_str, s._str);
		}

		// s1 = s3;
		// s1 = s1;
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				/*delete[] _str;
				_str = new char[s._capaicty + 1];
				strcpy(_str, s._str);
				_size = s._size;
				_capaicty = s._capaicty;*/

				char* tmp = new char[s._capaicty + 1];
				strcpy(tmp, s._str);
				delete[] _str;
				_str = tmp;

				_size = s._size;
				_capaicty = s._capaicty;
			}

			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capaicty = 0;
		}

		const char* c_str()
		{
			return _str;
		}

		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		size_t size() const
		{
			return _size;
		}

		// 不修改成员变量数据的函数，最好都加上const
		bool operator>(const string& s) const
		{
			return strcmp(_str, s._str) > 0;
		}

		bool operator==(const string& s) const
		{
			return strcmp(_str, s._str) == 0;
		}

		bool operator>=(const string& s) const
		{
			//return *this > s || *this == s;
			return *this > s || s == *this;
		}

		bool operator<(const string& s) const
		{
			return !(*this >= s);
		}

		bool operator<=(const string& s) const
		{
			return !(*this > s);
		}

		bool operator!=(const string& s) const
		{
			return !(*this == s);
		}

		void resize(size_t n, char ch = '\0');

		void reserve(size_t n)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;

			_capaicty = n;
		}

		void push_back(char ch)
		{
			if (_size + 1 > _capaicty)
			{
				reserve(_capaicty * 2);
			}

			_str[_size] = ch;
			++_size;

			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capaicty)
			{
				reserve(_size + len);
			}

			strcpy(_str + _size, str);
			//strcat(_str, str);
			_size += len;
		}

		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		void insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size + 1 > _capaicty)
			{
				reserve(2 * _capaicty);
			}

			size_t end = _size;
			while (end >= pos)
			{
				_str[end + 1] = _str[end];
				--end;
			}

			_str[pos] = ch;
			++_size;
		}

		void insert(size_t pos, const char* str)
		{

		}

		void erase(size_t pos, size_t len = npos)
		{

		}

	private:
		char* _str;
		size_t _capaicty;
		size_t _size;

		static const size_t npos;
		// 可以
		//static const size_t npos = -1;

		/*	static const size_t N = 10;
			int _a[N];*/

			// 不可以
			//static const double dpos = 1.1;
	};

	const size_t string::npos = -1;

	void test_string1()
	{
		string s1;
		string s2("hello world");

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		s2[0]++;

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
	}

	void test_string2()
	{
		string s1;
		string s2("hello world");

		string s3(s2);
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;

		s2[0]++;
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;

		s1 = s3;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;

		s1 = s1;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;
	}

	void Print(const string& s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			cout << s[i] << " ";
		}
		cout << endl;

		string::const_iterator it = s.begin();
		while (it != s.end())
		{
			//*it = 'x';
			++it;
		}
		cout << endl;

		for (auto ch : s)
		{
			cout << ch << " ";
		}
		cout << endl;
	}

	void test_string3()
	{
		string s1("hello world");
		for (size_t i = 0; i < s1.size(); ++i)
		{
			s1[i]++;
		}
		cout << endl;

		for (size_t i = 0; i < s1.size(); ++i)
		{
			cout << s1[i] << " ";
		}
		cout << endl;

		Print(s1);

		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			(*it)--;
			++it;
		}
		cout << endl;

		it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto ch : s1)
		{
			cout << ch << " ";
		}
		cout << endl;
	}

	void test_string4()
	{
		string s1("hello world");
		string s2("hello world");
		string s3("xx");

		cout << (s1 < s2) << endl;
		cout << (s1 == s2) << endl;
		cout << (s1 >= s2) << endl;
	}

	void test_string5()
	{
		string s1("hello world");
		/*s1.push_back(' ');
		s1.append("xxxxxxxxxxxxxxxxxxxx");*/

		s1 += ' ';
		s1 += "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

		cout << s1.c_str() << endl;

		string s2;
		s2 += 'a';
		//s2 += 'b';
		//s2 += 'c';
		cout << s2.c_str() << endl;

		s1.insert(5, 'x');
		cout << s1.c_str() << endl;

		s1.insert(0, 'x');
		cout << s1.c_str() << endl;
	}
}

