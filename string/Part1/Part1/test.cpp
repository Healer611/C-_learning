#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//	string s;
//	cout << sizeof(s) << endl;
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
#include<string>
//int main()
//{
//	string s1;
//	string s2("hello world");
//	for (size_t i = 0; i < s2.size(); ++i) {
//		s2[i]++;
//	}
//	cout << s2 << endl;
//	return 0;
//}
//int main()
//{
//	//string s2;
//	//cin >> s2;
//	//for (size_t i = 0; i < s2.size(); ++i) {
//	//	s2[i]++;
//	//}
//	//cout << s2 << endl;
//	//string s3 = "hello";
//	//string s4(s3, 2, 3);
//	//cout << s4 << endl;
//	//string s5(s3, 2);
//	//cout << s5 << endl;
//
//	//string s7("hello world", 5);
//	//cout << s7 << endl;
//	//string s8("hello world", 5 ,2);
//	//cout << s8 << endl;
//
//	string s9(10, '$');
//	cout << s9 << endl;
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	//cout << s1.size() << endl;
//	//cout << s1.length() << endl;
//	cout << s1.max_size() << endl;
//	cout << s1.capacity() << endl;
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	//s1.push_back(' ');
//	//s1.push_back('!');
//	//cout << s1 << endl;
//
//	//s1.append("a");
//	//cout << s1 << endl;
//
//	s1 += ' ';
//	s1 += '!';
//	s1 += "world";
//	cout << s1 << endl;
//	return 0;
//}


//class string
//{
//private:
//	char* _ptr;
//	char _buf[16];
//	size_t _size;
//	size_t _capacity;
//};


//int main()
//{
//	// 观察扩容情况  -- 1.5倍扩容
//	string s;
//
//	//cout << sizeof(s) << endl;
//	s.reserve(100);
//	size_t sz = s.capacity();
//	cout << "making s grow:\n";
//	cout << "capacity changed: " << sz << '\n';
//	for (int i = 0; i < 100; ++i)
//	{
//		s.push_back('c');
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}


//int main()
//{
//	// 扩容
//	string s1("hello world");
//	s1.reserve(100);
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	// 扩容+初始化
//	string s2("hello world");
//	s2.resize(100);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//
	//// 比size小，删除数据，保留前5个
	//s2.resize(5);
	//cout << s2.size() << endl;
	//cout << s2.capacity() << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//
//	//string::iterator it = s1.begin();
//	//while (it != s1.end()) {
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//
//	for (auto ch : s1) {
//		cout << ++ch << " ";
//	}
//	cout << endl;
//
//	//string::reverse_iterator rit = s1.rbegin();
//	//while (rit != s1.rend()) {
//	//	cout << *rit << " ";
//	//	++rit;
//	//}
//	//cout << endl;
//
//	//string::const_iterator it = s1.begin();
//	auto it = s1.begin();
//	while (it != s1.end()) {
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//string::const_reverse_iterator rit = s1.rbegin();
//	auto rit = s1.rbegin();
//	while (rit != s1.rend()) {
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	cout << s1 << endl;
//
//	return 0;
//}


//int main()
//{
//	string s1("hello world");
//
//	//cout << s1[4] << endl;
//	//cout << s1.at(4) << endl;
//
//	//try {
//	//	s1.at(100);
//	//}
//	//catch (const exception& e) {
//	//	cout << e.what() << endl;
//	//}
//
//	cout << s1.back() << endl;
//	cout << s1.front() << endl;
//
//	return 0;
//}


//int main()
//{
//	// insert/erase不推荐经常使用，能少用就少用
//	// 因为他们可能都存在要挪动数据，效率低下
//	string s1("world");
//	//s1.insert(0, "hello");
//	//s1.insert(0, "w");
//	//cout << s1 << endl;
//
//	//s1.insert(2, 1, ' ');
//	//s1.insert(3, " ");
//	//s1.insert(s1.begin()+2, ' ');
//	//s1.insert(s1.end() - 1, ' ');
//	//cout << s1 << endl;
//
//	string s2("hello world");
//	//s2.erase(5, 1);
//	//s2.erase(s2.begin() + 5);
//	//cout << s2 << endl;
//
//	//s2.erase(5, 30);
//	s2.erase(5);
//	cout << s2 << endl;
//
//	return 0;
//}

//int main()
//{
//	//string s1("hello world");
//	//s1.replace(5, 1, "&&&&");
//	//cout << s1 << endl;
//
//	string s1("hello world I love you");
//	size_t num = 0;
//	for (auto ch : s1) {
//		if (ch == ' ')
//			++num;
//	}
//	s1.reserve(s1.size() + 2 * num);
//	size_t pos = s1.find(' ');
//	while (pos != string::npos) {
//		s1.replace(pos, 1, "***");
//		pos = s1.find(' ',pos+3);
//	}
//	cout << s1 << endl;
//	return 0;
//}


//int main()
//{
//	string s1("hello world I love you");
//	string newStr;
//	size_t num = 0;
//	for (auto ch : s1) {
//		if (ch != ' ')
//			++num;
//	}
//	newStr.reserve(s1.size() + 2 * num);
//	for (auto ch : s1) {
//		if (ch != ' ')
//			newStr += ch;
//		else
//			newStr += "***";
//	}
//	s1 = newStr;
//	cout << s1 << endl;
//}

//int main()
//{
//	string s1("hello world");
//	string s2("xxxxx");
//	s1.swap(s2);
//	cout << s1 << endl;
//	cout << s2 << endl;
//
//	swap(s1, s2);
//	cout << s1 << endl;
//	cout << s2 << endl;
//}

//int main()
//{
//	string s1("hello world");
//	//cout << s1 << endl;
//	//cout << s1.c_str() << endl;
//	//cout << (void*)s1.c_str() << endl;
//
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;
//	s1 += '\0';
//	s1 += '\0';
//	s1 += "xxxxx";
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;
//
//	//string filename("test.cpp");
//	//FILE* fout = fopen(filename.c_str(), "r");
//	//if (fout == nullptr)
//	//	perror("fopen fail");
//
//	//char ch = fgetc(fout);
//	//while (ch != EOF)
//	//{
//	//	cout << ch;
//	//	ch = fgetc(fout);
//	//}
//
//	//fclose(fout);
//
//	return 0;
//}

//int main()
//{
//	//string file("string.cpp.tar.zip");
//	//size_t pos = file.rfind('.');
//	//if (pos != string::npos)
//	//{
//	//	string suffix = file.substr(pos, file.size() - pos);
//	//	string suffix = file.substr(pos);
//	//	cout << suffix << endl;
//	//}
//
//	string url("http://www.cplusplus.com/reference/string/string/find/");
//	cout << url << endl;
//	size_t start = url.find("://");
//	if (start == string::npos)
//	{
//		cout << "invalid url" << endl;
//	}
//
//	start += 3;
//	size_t finish = url.find('/', start);
//	string address = url.substr(start, finish - start);
//	cout << address << endl;
//
//
//	return 0;
//}


int main()
{
	std::string str("Please, replace the vowels in this sentence by asterisks.");
	std::size_t found = str.find_first_of("abcdv");
	while (found != std::string::npos)
	{
		str[found] = '*';
		found = str.find_first_of("abcdv", found + 1);
	}

	std::cout << str << '\n';

	//string s1("hello world");
	//string s2("hello world");
	//s1 == s2;
	//s1 == "hello world";
	//"hello world" == s1;

	return 0;
}
