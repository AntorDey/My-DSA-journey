#include<iostream>
using namespace std;

int main(){
    int x=23;
    int y=53;
    cout<<x<<" "<<y<<endl;
    // int temp=x;   // ***method no:1 (using temp variable).
    // x=y;
    // y=temp;

    x=x+y;
    y= x-y;   //method no: 2
    x=x-y;
    cout<<"Swap value is :"<<x<<" "<<y<<endl;
}