#include <iostream>

int main(){
    const int x = 5;
    const int* pt = &x;

    int* pt2 = const_cast<int*>(pt);
    *pt2 = 1;
    std::cout << *pt2;
    std::cout << "\n&x=" << &x << "\npt2=" << pt2 << "\n*pt2 " << *pt2 << '\n';
    std::cout << "x " << x;
}