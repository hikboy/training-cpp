
#include <iostream>

int main()
{
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    decltype(cj) z;
    return 0;
}
