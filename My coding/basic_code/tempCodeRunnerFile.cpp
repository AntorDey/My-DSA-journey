#include<iostream>
using namespace std;
int main(){
    int temp;
    int a,b;
    
cout<<"Enter a & b: ";
cin>>a;
cin>>b;

temp=a;
a=b;
b=temp;

cout<<a<<" "<<b;

}