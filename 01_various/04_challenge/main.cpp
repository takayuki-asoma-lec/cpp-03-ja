// コードを入力してください
#include "unique_ptr.hpp"
#include <iostream>

int main(){
    unique_int_ptr my_int(3);
    std::cout << *my_int << std::endl;
    unique_ptr<double> my_double(4.5);
    std::cout << *my_double << std::endl;
}