#include <iostream>
using namespace std;

int main(){
    int money;
    cout << "enter your money: ";
    cin >> money;

    switch (money) {
        case 70 ... 99:
        cout << "you can gift a watch";
        break;
        
        case 50 ... 69:
        cout << "you can gift a comic book";
        break;

        case 30 ... 49:
        cout << "you can gift a chocolate";
        break;

        case 10 ... 29:
        cout << "you can gift a pen";
        break;

        default:
        cout << "a a` m chet";
    }
    
        
    }
    