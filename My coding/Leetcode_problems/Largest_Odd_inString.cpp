#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "34678";
 int last_char = s[s.size() - 1];
  if (last_char % 2 != 0)
 cout<< s;
 
for(int i = s.size()-1; i >=0; i--){
    if((s[i]-'0') % 2 != 0){
        cout << s.substr(0, i + 1);
        break;
    } 
}


}
            