#include <iostream>
using namespace std;

int main(){
    
    // đầu tiên là gán số vào number
    int number = 123456789;
    
    /* thêm digits để đếm số tổng số chữ số
    vì ban đầu chưa đếm số nên digits = 0*/
    int digits = 0;
    
    /*sao chép số cho value = number
    để khi đếm số chỉ value là thay đổi(biến) còn number giữ nguyên(hằng số)*/ 
    int value = number;


    while (value != 0) {
        value /=10; 
        digits++;
        /*trong khi value chưa = 0(value != 0) và bắt đầu chia cho 10 và bỏ đi một chữ số phía sau
        thì digits sẽ tăng thêm 1 với mỗi lần chia*/ 
    }
    
    cout << "count digits 1: " << digits << endl; 



    int number2 = 5;
    int digits2 = 0;
    int value2 = number2;

    while (value2 != 0){
        value2 /=10;
        digits2++;
    }

    cout << "count digits 2: " << digits2 <<endl;



    int number3 = -1234;
    int digits3 = 0;
    int value3 = number3;

    while (value3 != 0){
        value3 /=10;
        digits3++;
    }

    cout << "count digits 3: " << digits3 <<endl;

}