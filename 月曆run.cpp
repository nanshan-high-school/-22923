#include <iostream>
using namespace std;
int main(){
    int firstDay;

    cout << "����1���P���X(�P���鬰0,�H������)";
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
