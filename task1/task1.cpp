#include <iostream>
#include <string>
#include "checkMask.hpp"

using std::string, std::cin, std::cout, std::endl;

int main(int argc, char const *argv[])
{
    //string mask = argv[1];
    //string mask = "11110000000000000000000000000000";
    uint32_t mask = 0b01110000000000000000000000000000;
    cout << mask << endl;
    cout << (checkMask(mask) ? "CORRECT" : "INCORRECT") << endl;
    return 0;
}
