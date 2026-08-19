#include <iostream>
using namespace std;
int main(){

    int x = 10;
    int* ptr =&x;
    cout<<x<<endl;
    *ptr =23;    //change x value without using x;
    cout<<x<<endl;
}