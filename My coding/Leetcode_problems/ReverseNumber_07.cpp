#include<iostream>
using namespace std;

int main(){
   int INT_MAX , INT_MIN;
    int ans = 0;
    int x ;
    cout<<"Enter number:";
    cin>>x;
    while(x != 0){
        int digit = x%10;
        if(ans>INT_MAX/10 || ans< INT_MIN/10){
            
        }
        ans = (ans * 10 )+ digit;
        x=x/10;
    }
    cout<< ans;
    return 0;
}
