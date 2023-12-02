#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
        return true;
    return false;
}
struct Date {
    int year, month, day;
};
int main() {
    int a[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31} };
    Date a1, a2;
    int day = 0;
    cin >> a1.year >> a1.month >> a1.day;
    cin >> a2.year >> a2.month >> a2.day;
    Date max, min;
    if (a1.year - a2.year > 0) {
        max = a1;
        min = a2;
    }
    else {
        max = a2;
        min = a1;
    }
    for (int i = min.year; i < max.year; i++) {
        if (isLeapYear(i))
            day += 366;
        else
            day += 365;
    }
    if (max.month < min.month) {
        for (int i = max.month; i < min.month; i++) {
            if (isLeapYear(max.year))
                day -= a[1][i];
            else
                day -= a[0][i];
        }
    }
    else {
        int i = min.month;
        while (max.month != i)
        {
            if (isLeapYear(max.year))
                day += a[1][i];
            else
                day += a[0][i];
            i++;
        }
    }
    if (max.day < min.day) {
        day -= min.day - max.day;
    }
    else {
        day += max.day - min.day;
    }
    cout << day;
    return 0;
}
