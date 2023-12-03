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