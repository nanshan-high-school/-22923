#include <iostream.h>
using namespace std;
int day(int);
int main(){
    int firstDay;

    cout << "此月1號星期幾(星期日為0,以此類推)";
    cin >> firstDay;

    int month;

    cout << "現在幾月";
    cin >> month;

    int year;

    cout << "輸入年分";
    cin >> year;

    cout << "日一二三四五六";
    switch (year % 4){
        case 0:
        year = true;
        break;

        default:
        year = false;
        break;
    }
    switch (month){
        case 2;
        day() = ?29 :28;
        break;

        case 4;
        case 6;
        case 9;
        case 11;
        day() = 30;
        break;

        default:
        day() = 31;
    }
}
int day(date){
    int week;
    while (week == 7){
            cout << "\n";
            week -= 7;
        }
        for(int j = 1; j <= firstDay; j++){
            cout << ;
            week++;
        }
        for(int j = 1; j <= date; j++){
            cout << j;
            week++;
    }
}