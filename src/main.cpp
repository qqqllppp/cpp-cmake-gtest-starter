#include <iostream>
#include "lib/libcode.hpp"

int main(int argc, char **argv)
{
    int s = sum(2, 3);
    std::cout << "Sum is " << s << "\n";
    return 0;
}