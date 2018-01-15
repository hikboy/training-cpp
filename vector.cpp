
#include <iostream>
//#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(void)
{
    vector<int> ivec;
    vector<int> ivec2(ivec);
    vector<int> ivec3 = ivec;
//    vector<string> svec(ivec2);
    vector<string> articles = {"a","an","the"};
//    vector<string> articles1 = ("a","an","the");
    vector<int> ivec4(10, -1);
    vector<string> svec(10, "hi!");
    vector<int> ivec5(10);
    vector<string> ivec6(10);
//    vector<int> vi = 10;
    vector<int> v1(10);
    vector<int> v2{10};
    vector<int> v3(10, 1);
    vector<int> v4{10, 1};
    vector<string> v5{"hi"};
//    vector<string> v6("hi");
    vector<string> v7{10};
    vector<string> v8{10,"hi"};
    vector<int> vt;
#if 0
    for(int i = 0; i != 100; i++){
        vt.push_back(i);
    } 

    string word;
    vector<string> text;
    while(cin >> word){
        text.push_back(word);
    }
    
    vector<int> v{1,2,3,4,5,6,7,8,9};

    for(auto &i : v)
        i *= i;
    for(auto i : v)
        cout << i << " ";
    cout << endl;
#endif
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while(cin >> grade){
        if(grade <= 100)
            ++scores[grade/10];
    }
    return 0;
}
