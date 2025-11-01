#include <iostream>
#include <ctime>

void fill_rand(int a, int b, int arr[], int size){
    if(b < a){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = 0; i < size; ++i){
        arr[i] = rand() % (b - a) + a;
    }

}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

void print_chetn(int arr[], int size){
    for(int i = 0; i < size / 2; ++i){
        std::cout << arr[i] << ' ' << arr[size - i - 1] << ' ';
    }
    std::cout << '\n';
}

void print_odd(int arr[], int size){
    for(int i = 0; i < size / 2; ++i){
        std::cout << arr[i] << ' ' << arr[size - i - 1] << ' ';
    }
    std::cout << arr[size/2] << '\n';
}


void print_wtf(int arr[], int size){
    if(size % 2 == 0){
        print_chetn(arr, size);
    }
    else{
        print_odd(arr, size);
    }
}
// 3 7
// 3 + 7 = 10; 10 - 3 = 7

int main(){
    
}