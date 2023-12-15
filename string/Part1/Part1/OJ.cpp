//917. ������ת��ĸ
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


//387. �ַ����еĵ�һ��Ψһ�ַ�
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


//43. �ַ������
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
//                result[i + j + 1] = product % 10 + '0'; // ��ǰλ
//                result[i + j] += product / 10; // ��λ
//            }
//        }
//
//        // ȥ�����ǰ��0
//        size_t startpos = result.find_first_not_of("0");
//        if (string::npos != startpos) {
//            return result.substr(startpos);
//        }
//        return "0";
//    }
//};

//557. ��ת�ַ����еĵ��� III
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

//541. ��ת�ַ��� II
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

//125. ��֤���Ĵ�
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