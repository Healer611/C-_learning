#include<iostream>
using namespace std;

//int main()
//{
//	string s1("hello world I love you");
//	size_t num = 0;
//	size_t pos = s1.find(' ');
//	while (pos != string::npos) {
//		s1.replace(pos, 1, "***");
//		pos = s1.find(' ');
//	}
//	cout << s1 << endl;
//	return 0;
//}
//int main()
//{
//	string s1("hello world I love you");
//	size_t num = 0;
//	for (auto n : s1) {
//		if (n == ' ')
//			num++;
//	}
//	s1.reserve(s1.size() + num * 2);
//	size_t pos = s1.find(' ');
//	while (pos != string::npos) {
//		s1.replace(pos, 1, "***");
//		pos = s1.find(' ', pos + 3);
//	}
//	cout << s1 << endl;
//}


//int main()
//{
//	string s1("hello world I love you");
//	string newStr;
//	size_t n = 0;
//	for (auto ch : s1) {
//		if (ch == ' ')
//			++n;
//	}
//	newStr.reserve(s1.size() + 2 * n);
//	for (auto ch : s1) {
//		if (ch != ' ')
//			newStr += ch;
//		else
//			newStr += "***";
//	}
//	s1 = newStr;
//	cout << s1;
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;
//
//	return 0;
//}