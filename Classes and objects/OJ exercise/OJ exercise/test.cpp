/*KY222 ��ӡ����
* https://www.nowcoder.com/practice/eebb2983b7bf40408a1360efb33f9e5d?tpId=40&&tqId=31013&rp=1&ru=/activity/oj&qru=/ta/kaoyan/question-ranking
�������m��һ���еĵ�n�죬�����n���Ǽ��¼��š�
�������� :
���������������y(1 = y = 3000)��n(1 = n = 366)��


������� :
�����ж���������ݣ�����ÿ�����ݣ� �� yyyy - mm - dd�ĸ�ʽ�������ж�Ӧ�����ڴ�ӡ������
ʾ��1
����
2000 3
2000 31
2000 40
2000 60
2000 61
2001 60
���
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