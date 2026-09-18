#include <iostream>
using namespace std;
int main(){

    string s = "AnTor";
    for (int i = 0; i < (int)s.size(); ++i)
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            s[i] =char(c+32); // or c + 32
        }
    }
    cout<<s;
}