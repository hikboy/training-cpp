
#include <iostream>
#include <string>
#include <vector>
//#include <container>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
//using std::container;

int main(void)
{
    string s("some string");
    vector<int>::iterator it;
    string::iterator it2;
    vector<int>::const_iterator it3;
    string::const_iterator it4;

    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);

#if 0
    if(s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
#endif

    cout << s << endl;

    return 0;
}
