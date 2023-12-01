/*KY258 日期累加
设计一个程序能计算一个日期加上若干天后是什么日期。
输入描述:
输入第一行表示样例个数m，接下来m行每行四个整数分别表示年月日和累加的天数。


输出描述 :
输出m行，每行按yyyy - mm - dd的个数输出。
示例1
输入
1
2008 2 3 100
输出
2008 - 05 - 13
*/
//https://www.nowcoder.com/practice/eebb2983b7bf40408a1360efb33f9e5d?tpId=40&&tqId=31013&rp=1&ru=/activity/oj&qru=/ta/kaoyan/question-ranking

#include <iostream>
#include <cassert>
using namespace std;
int Getday(int year, int month)
{
    assert(month > 0 && month < 13);
    int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        return 29;
    }
    else {
        return arr[month - 1];
    }
}
int main() {
    int _year, _month, _day;
    int m = 0, day;
    cin >> m;
    while (m--) {
        cin >> _year >> _month >> _day;
        cin >> day;
        _day += day;
        while (_day > Getday(_year, _month)) {
            _day -= Getday(_year, _month);
            ++_month;
            if (_month == 13) {
                ++_year;
                _month = 1;
            }
        }

        if (_month < 10 && _day < 10)
            cout << _year << "-" << 0 << _month << "-" << 0 << _day << endl;
        else if (_month < 10)
            cout << _year << "-" << 0 << _month << "-" << _day << endl;
        else if (_day < 10)
            cout << _year << "-" << _month << "-" << 0 << _day << endl;
        else
            cout << _year << "-" << _month << "-" << _day << endl;
    }
    return 0;
}