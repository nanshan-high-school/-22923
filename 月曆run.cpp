#include <iostream>
using namespace std;
int main(){
    int firstDay;

    cout << "此月1號星期幾(星期日為0,以此類推)";
    cin >> firstDay;

    cout << "SMTWTFS\n";
    
    for(int j = 1; j <= firstDay; j++){
        cout <<" ";
    }
    for(int j = 1; j <= 7 - firstDay; j++){
        cout << j;
    }
    return 0;
}
