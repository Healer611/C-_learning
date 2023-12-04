#pragma once
#include<cstring>
#include<cassert>
namespace hbr {
	class string {
	public:
		//整合到下面
		/*string()
			:_str(new char[1]), _size(0), _capacity(0)
		{
			_str[0] = '\0';
		}*/
		//string(const char* str)
		//	:_str(str),_size(strlen(str)),_capacity(strlen(str))
		//{}
		//string(const char* str = nullptr)  不可以
		//string(const char* str = '\0')
		//string(const char* str = "\0")
		string(const char* str="")//默认\0
			:_size(strlen(str))
		{
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
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
		
		string(const string& s)
			:_size(s._size),_capacity(s._capacity)
		{
			_str = new char[s._capacity + 1];
			strcpy(_str, s._str);
		}

		size_t size() const
		{
			return _size;
		}

		string& operator=(const string& s)
		{
			if (this != &s) {
				/*delete[] _str;
				_str = new char[s._capacity];
				strcpy(_str, s._str);
				_size = s._capacity;
				_capacity = s._capacity;*/

				char* tmp = new char[s._capacity + 1];
				strcpy(tmp, s._str);
				delete[] _str;
				_str = tmp;
				_size = s._size;
				_capacity = s._capacity;
			}
			return *this;
		}

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

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}

//void test_string1()
//{
//	string s1;
//	string s2("hello world");
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//
//	s2[0]++;
//
//	cout << s1.c_str() << endl;
//	cout << s2.c_str() << endl;
//}
//
//void test_string2()
//{
//	string s1;
//	string s2("hello world");
//
//	string s3(s2);
//	cout << s2.c_str() << endl;
//	cout << s3.c_str() << endl;
//
//	s2[0]++;
//	cout << s2.c_str() << endl;
//	cout << s3.c_str() << endl;
//
//	s1 = s3;
//	cout << s1.c_str() << endl;
//	cout << s3.c_str() << endl;
//
//	s1 = s1;
//	cout << s1.c_str() << endl;
//	cout << s3.c_str() << endl;
//}