#include <iostream>

#include "Array/Array.hpp"

int main() {
    std::cout << sizeof(int) << std::endl;
    Array arr(42, 5);
    arr.Display();
    std::cout << arr.Size() << std::endl;
    std::cout << arr.Capacity() << std::endl;

    arr.Add(1);
    arr.Add(2);
    arr.Add(3);
    arr.Add(4);
    arr.Add(5);
    arr.Add(6);

    arr.Display();
    return 0;
}
