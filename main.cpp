#include <iostream>

#include "QuickSort.h"


int main() {
    srand(time(NULL));
    std::cout << "Hello, World!\n" << std::endl;
    QuickSort list;
    list({1,2});
    list.addVector({9,7,5,3,1});
    list.print();
    list.sort();
    return 0;
}
