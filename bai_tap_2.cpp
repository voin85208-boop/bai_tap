#include <iostream>
using namespace std;

int fibonacci(int n){ 
    /*tạo hàm fibonacci; int: hàm sẽ trả về số nguyên,
    n: số được đưa vào hàm*/
    if (n <= 1){
        return n;//nếu n < hoặc = 1 thì trả lại n
    }
    /*lúc này muốn tìm n ta quy ước n là fibonacci n là F(n)
    để tìm F(n) ta lấy F(n-1) + F(n-2) để giá trị lớn chia thành giá trị bé hơn
    đến khi còn 0 hoặc 1 thì không chia nữa và trả lại số (return)*/ 
    return fibonacci(n - 1) + fibonacci(n - 2);
    
}

int main(){
    /*dùng int main để hàm có thể hoạt động và sử dụng lệnh cout,
    in hàm fibonacci ra màn hình; cho n = số*/
    cout << "fibonacci 1 = " << fibonacci(0) << endl;
    cout << "fibonacci 2 = " << fibonacci(1) << endl;
    cout << "fibonacci 3 = " << fibonacci(2) << endl;
    cout << "fibonacci 4 = " << fibonacci(6) << endl;

}