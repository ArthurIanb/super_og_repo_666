#include <iostream>

void reverse_ints_from_count(int* str, int from, int count){
    for(int i = 0; i < count / 2; ++i){
        int temp = str[from+i];
        str[from+i] = str[from + count - 1 - i];
        str[from + count - 1 - i] = temp;
    }
}

void shift_arr(int *arr, int sz, int shift){
    reverse_ints_from_count(arr, 0, sz);
    reverse_ints_from_count(arr, 0, shift);
    reverse_ints_from_count(arr, shift, sz - shift);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    shift_arr(arr, 8, 4);
    for(auto i : arr){
        std::cout << i << ' ';
    }
}