
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

string::size_type  find_char(const string &s, char c,
                             string::size_type &occurs)
{
    auto ret = s.size();
    cout << "s.size is " << s.size() << endl;
    occurs = 0;
    for(decltype(ret) i=0; i!=s.size(); ++i) {
        if(s[i] == c) {
            if(ret == s.size()){
                ret = i;
            }
            ++occurs;
        }
    }
    return ret;
}

int main(void)
{
    string s1 = "todo hello,liujiabin";
    string &sr = s1;
    string::size_type cnt;

    auto inx = find_char(sr, 'l', cnt);

    cout << "inx = " << inx << " " << "cnt = " << cnt <<  endl;

    
    return 0;
}
