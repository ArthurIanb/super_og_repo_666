#include <iostream>


template <typename T, typename TT>
void tt(T x, TT y){
    std::cout << x << '\n';
    std::cout << y;
}

int main(){
    tt<float, double>(3, 3.11);
}