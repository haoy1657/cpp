#include <iostream>

int area_or_perimeter(int a , int b) {
  return a == b ? a * b : 2 * (a + b);
}

int main() {


    std::cout << "Result : " << area_or_perimeter(3,3) ; 
    return 0 ; 
}