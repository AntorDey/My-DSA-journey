#include <iostream>
using namespace std;
void swap(int& x, int& y){
    int temp= x;
    x=y;
    y=temp;        //function er maddome swap;
}

int main(){
    int x=25;
    int y=90;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
}