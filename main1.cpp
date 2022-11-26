#include "C1S1.h"

#include <iostream>

int main(){
    C1S1 *set1 = new C1S1();
    std::string src;
    int base;
    std::cin >> src >> base;
    std::cout << src << ", " << set1->base_to_base(src, base);

    return 0;
}