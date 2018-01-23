
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main(void)
{
    int iter[100] = {0,1,2,3,4,5,6,7};
    int *p, *p1, *p2, *p3;
    int t, t1, t2, t3;

    p = p1 = p2 = p3  =  iter;

    t = *p++;
    t1 = (*p1)++;
    t2 = *++p2;
    t3 = ++*p3;

    cout << " t is "<< t  <<" t1 is "<< t1 << " t2 is " << t2 << " t3 is " <<t3 << endl;
    
    return 0;
}
