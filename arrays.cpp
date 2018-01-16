
#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::begin;
using std::end;


int main(void)
{
    unsigned cnt = 43;
    constexpr unsigned sz = 42;
    int arr[10];
    int *parr[sz]; 
    string bad[cnt];//c++ primer said here must be an error
//    string strs[get_size()]; //if get_size is constexpr type
    size_t hello;    
    int ia[] = {0,1,2,3,4,5,6,7,8,9};
    auto ia2(ia);
    auto ia3(&ia[0]);
//    ia2 = 52;
//    decltype(ia) ia4 = {0,1,2,3,4,5,6,7,8,9,0};
    decltype(ia) ia4 = {0,1,2,3,4,5,6,7,8,9};
    ia4[9] = 9;

    int ia5[] = {0,1,2,3,4,5,6,7,8,9};
    int *e = &ia5[10];
    int *beg = begin(ia5);
    int *last = end(ia5);
    
    return 0;
    
}
