#include <iostream>
using namespace std;

void sort_elements(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[j] < arr[j + 1]){
                int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }    
    }
}

int main(){
    int arr[] = {10, 67, 98, 31};
    sort_elements(arr, 4);
    for(int i = 0; i < 4; i++)cout << arr[i] << " ";
    return 0;
}