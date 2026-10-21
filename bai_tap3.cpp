#include <iostream>
using namespace std;

double average(double marks[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
    sum += marks[i];
    }
    return sum / size;
}

int main(){
    double marks[] ={10.5, 67.8, 98.6, 31.2};
    cout << average(marks, 4) << endl;
    return 0; 
}