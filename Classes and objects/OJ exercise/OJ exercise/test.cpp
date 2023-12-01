/*KY222 打印日期
* https://www.nowcoder.com/practice/eebb2983b7bf40408a1360efb33f9e5d?tpId=40&&tqId=31013&rp=1&ru=/activity/oj&qru=/ta/kaoyan/question-ranking
给出年分m和一年中的第n天，算出第n天是几月几号。
输入描述 :
输入包括两个整数y(1 = y = 3000)，n(1 = n = 366)。


输出描述 :
可能有多组测试数据，对于每组数据， 按 yyyy - mm - dd的格式将输入中对应的日期打印出来。
示例1
输入
2000 3
2000 31
2000 40
2000 60
2000 61
2001 60
输出
2000 - 01 - 03
2000 - 01 - 31
2000 - 02 - 09
2000 - 02 - 29
2000 - 03 - 01
2001 - 03 - 01
*/

#include <iostream>
using namespace std;

int main() {
    int a[2][13] = {
        {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365},
        {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366} };
    int y, n;
    while (cin >> y >> n) {
        int month = 0, day = 0, x = 0;
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            x = 1;
        }
        for (int i = 0; i < 13; i++) {
            if (n - a[x][i] <= a[x][i + 1] - a[x][i]) {
                month = i + 1;
                day = n - a[x][i];
                break;
            }
        }
        if (month < 10 && day < 10)
            cout << y << "-" << 0 << month << "-" << 0 << day << endl;
        else if (month < 10)
            cout << y << "-" << 0 << month << "-" << day << endl;
        else if (day < 10)
            cout << y << "-" << month << "-" << 0 << day << endl;
        else
            cout << y << "-" << month << "-" << day << endl;

    }
    return 0;
}