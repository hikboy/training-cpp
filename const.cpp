
#include <iostream>
int main()
{
    int sum = 0, val = 1;
    char hello = 5;
    double dwval = 3.14;
    const int ci = 1024;
    const int &r1 = ci;
    const int &r2 = hello;
    const char &r3 = dwval;
//    int * prt = nullptr;
    constexpr int mf = 20;
//    r3 = 8;
    const auto &j = 42;
    auto &h = 42;

//    std::cout << "hello" << " "  << r2 << std::endl;
    std::cout << "nihao" << " "  << r2 << std::endl;
    std::cout << "hhhhh" << " "  << r3 << std::endl;
    std::cout << "wwwww" << " "  << sum << std::endl;

    return 0;
}
