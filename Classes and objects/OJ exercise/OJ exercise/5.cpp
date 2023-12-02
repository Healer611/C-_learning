/*https://www.nowcoder.com/practice/769d45d455fe40b385ba32f97e7bcded?tpId=37&tqId=21296&ru=/exam/oj
HJ73 计算日期到天数转换*/

#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    cin >> year >> month >> day;

    int monthDay[13] = { 0,31,59,90,120,151,181,212,243,273,304,334,365 };
    int nday = monthDay[month - 1];
    nday += day;
    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        nday += 1;
    cout << nday << endl;
}
