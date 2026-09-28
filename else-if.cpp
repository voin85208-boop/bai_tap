#include <iostream>
using namespace std;

int main(){
    double score;
    cout << "enter your score: ";
    cin >> score;
    if (score >= 8){
        cout << "gioi";

    }
    else if (score >= 6.5){
        cout << "kha";

    }
    else if (score >= 5){
        cout << "trung binh";
    }
    else if (score < 5){
        cout << "yeu";
    }
}
