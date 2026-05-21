#include<iostream>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch (day%2)
    {
    case 1:
        cout << "Odd\n";
        break;
    case 0:
        cout << "Even\n";
        break;
    }
    return 0;
}