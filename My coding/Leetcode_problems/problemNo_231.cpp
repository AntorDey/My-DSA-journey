#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int x=2;
    cout <<"Enter power:";
    cin>>n;
    
    for(int i=0; i<=30; i++){
        int ans =(int)pow(x, i);        //power of two;
        if(ans==n){
            cout<< "true";
           return 0;
        }
    }
        cout<<"false";
        return 0;
    }
