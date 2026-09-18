#include<iostream>
using namespace std;
int main(){
    string s = "aabbcbbaa.";
    int start = 0, end = s.size()-1;
    while(start<end){
        if(s[start] != s[end]){
            cout<<"Not a pelindrome";
            return 0;
        }
        if(s[start]==s[end])
        start ++;
        end --;

    }
    cout<<"pelindrome";

}