#include <iostream>
using namespace std;


int main()
{
    float a = .5;
    int c = int(a * 256);
    cout << (c >> 8);
    cout << ".";
    int b = (c & 0xff) * 390625;
    string s = to_string(b);
    // cout << ".";
    for (int i = 0; i < 8 - (int)s.size(); i++)
    {
        s = "0" + s;
    }
    s = s.substr(0,4);
    s = s.substr(0,s.find_last_of("123456789") + 1);
    cout << s;
}
