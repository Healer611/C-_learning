//把字符串转换成整数
//https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13
//class Solution {
//public:
//    int StrToInt(string str) {
//        const int len = str.length();
//        if (len == 0) return 0;
//        int i = 0;
//        while (i < len && str[i] == ' ') {
//            ++i;    // 排除开头的空格
//        }
//        if (i == len) return 0;
//        if (!isdigit(str[i]) && str[i] != '+' && str[i] != '-') return 0;
//        bool neg = str[i] == '-' ? true : false;
//        i = isdigit(str[i]) ? i : i + 1;
//        long long ans = 0L;
//
//        while (i < len && isdigit(str[i])) {
//            ans = ans * 10 + (str[i++] - '0');
//
//            if (!neg && ans > INT_MAX) {
//                ans = INT_MAX;
//                break;
//            }
//            if (neg && ans > 1L + INT_MAX) {
//                ans = 1L + INT_MAX;
//                break;
//            }
//        }
//        if (i != len) return 0; // 不要此处，就是atoi()库函数的实现
//        return !neg ? static_cast<int>(ans) : static_cast<int>(-ans);
//    }
//};

//344. 反转字符串
//https://leetcode.cn/problems/reverse-string/
//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        reverse(s.begin(), s.end());
//    }
//};

//917. 仅仅反转字母
//https://leetcode.cn/problems/reverse-only-letters/description/
//class Solution {
//public:
//    string reverseOnlyLetters(string s) {
//        size_t begin = 0, end = s.size() - 1;
//        while (begin < end) {
//            while (begin < end && !isalpha(s[begin]))
//                ++begin;
//            while (begin < end && !isalpha(s[end]))
//                --end;
//            swap(s[begin], s[end]);
//            ++begin;
//            --end;
//        }
//        return s;
//    }
//};


//387. 字符串中的第一个唯一字符
//https://leetcode.cn/problems/first-unique-character-in-a-string/description/
//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[26] = { 0 };
//        for (auto ch : s) {
//            count[ch - 'a']++;
//        }
//        for (int i = 0; i < s.size(); i++) {
//            if (count[s[i] - 'a'] == 1)
//                return i;
//        }
//        return -1;
//    }
//};

//HJ1 字符串最后一个单词的长度
//https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37
//#include <iostream>
//using namespace std;
//
//int main() {
//    string str;
//    getline(cin, str);
//    size_t pos = str.rfind(' ');
//    if (pos != string::npos) {
//        cout << str.size() - pos - 1 << endl;
//    }
//    else {
//        cout << str.size() << endl;
//    }
//}

//HJ59 找出字符串中第一个只出现一次的字符
// https://www.nowcoder.com/practice/e896d0f82f1246a3aa7b232ce38029d4?tpId=37
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string a;
//    cin >> a;
//    int charCount[256] = { 0 };
//    for (auto e : a)
//    {
//        ++charCount[e];
//    }
//    int s = -1;
//    for (auto e : a)
//    {
//        if (charCount[e] == 1)
//        {
//            cout << e;
//            s = 1;
//            break;
//        }
//    }
//    if (s == -1)
//        cout << s;
//}
// 
// 415. 字符串相加
//https://leetcode.cn/problems/add-strings/
// class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        int next = 0;
//        string str;
//        str.reserve(num1.size() > num2.size() ? num1.size() + 1 : num2.size() + 1);
//        while (end1 >= 0 || end2 >= 0) {
//            int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//            int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//            int ret = val1 + val2 + next;
//            next = ret / 10;
//            ret = ret % 10;
//            str += '0' + ret;
//            --end1, --end2;
//        }
//        if (next == 1)
//            str += '1';
//        reverse(str.begin(), str.end());
//        return str;
//    }
//};
// 
// 
//43. 字符串相乘
//https://leetcode.cn/problems/multiply-strings/description/
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0")
//            return "0";
//        int n1 = num1.size(), n2 = num2.size();
//        string result(n1 + n2, '0');
//        for (int i = n1 - 1; i >= 0; i--) {
//            for (int j = n2 - 1; j >= 0; j--) {
//                int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0');
//                result[i + j + 1] = product % 10 + '0'; // 当前位
//                result[i + j] += product / 10; // 进位
//            }
//        }
//
//        // 去除结果前的0
//        size_t startpos = result.find_first_not_of("0");
//        if (string::npos != startpos) {
//            return result.substr(startpos);
//        }
//        return "0";
//    }
//};

//557. 反转字符串中的单词 III
//https://leetcode.cn/problems/reverse-words-in-a-string-iii/description/
//class Solution {
//public:
//    string reverseWords(string s) {
//        int pos = s.find(' ');
//        int start = 0;
//        while (pos != string::npos)
//        {
//            reverse(s.begin() + start, s.begin() + pos);
//            start = pos + 1;
//            pos = s.find(' ', pos + 1);
//        }
//        reverse(s.begin() + start, s.end());
//        return s;
//    }
//};

//541. 反转字符串 II
//https://leetcode.cn/problems/reverse-string-ii/description/
//class Solution {
//public:
//    string reverseStr(string s, int k) {
//        auto start = s.begin();
//        while (start < s.end()) {
//            if (start + k < s.end()) {
//                reverse(start, start + k);
//            }
//            else {
//                reverse(start, s.end());
//            }
//            start += 2 * k;
//        }
//        return s;
//    }
//};

//125. 验证回文串
//https://leetcode.cn/problems/valid-palindrome/description/
//class Solution {
//public:
//    bool isPalindrome(string s) {
//        string judge;
//        for (char c : s)
//        {
//            if (isalnum(c))
//                judge += tolower(c);
//        }
//        int left = 0;
//        int right = judge.size() - 1;
//        while (left < right)
//        {
//            if (judge[left] != judge[right])
//            {
//                return false;
//            }
//            ++left; --right;
//        }
//        return true;
//    }
//};