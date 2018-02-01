
#include <iostream>
#include <string>
#include <initializer_list>

using std::string;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::initializer_list;

void error_msg(initializer_list<string> il)
{
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

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

char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

int main(void)
{
    string s1 = "todo hello,liujiabin";
//    string &sr = s1;
//    string::size_type cnt;
//
//    auto inx = find_char(sr, 'l', cnt);
//
//    cout << "inx = " << inx << " " << "cnt = " << cnt <<  endl;

//    error_msg({"liujiabin", "zhanglaosan"});
//    error_msg({"liujiabin", s1});
    
    string s("a value");
    cout << s << endl;
    get_val(s, 0) = 'A';
    cout << s << endl;

    return 0;
}
