
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

    vector<int> v;
    const vector<int> cv;
    auto t1 = v.begin();
    auto t2 = cv.begin();
    auto t3 = v.cbegin();

    vector<string> text;

    for(auto it = text.cbegin(); it != text.cend() && !it->empty(); ++it)
        cout << *it << endl;

    auto mid1 = text.begin() + text.size() / 2;

    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    string sought = "A";
    while(mid != end && *mid != sought){
        if(sought < *mid)
            mid = end;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    return 0;
}
