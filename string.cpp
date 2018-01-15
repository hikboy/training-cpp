
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(void)
{
    string s;
    string line;
    string s1 = "hello", s2 = "world";
    string s3 = s1 + ", "  + s2 + '\n';
    string s4 = s1 + ", ";
//    string s5 = "hello" + ", ";
    string s6 = s1 + ", " + "world";
    string s7 = "hello" + (", " + s2);

    while(getline(cin, line)) 
//        if(!line.empty())
        if(line.size() > 80)
            cout << line << endl;
    
    return 0;
}
