#include<iostream>
using namespace std;
int main(){
    string s = "hi antor";
    // cin>> s;

    int i =(int)s.size()-1;
    while(i>=0 && s[i] == ' '){
    i--;
    }
    int count = 0;
    while(i>=0 && s[i] != ' '){
        count++;
        i--;
    }
    cout<<count;
}