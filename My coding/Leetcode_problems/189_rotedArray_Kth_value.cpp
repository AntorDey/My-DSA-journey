#include<iostream>
using namespace std;
int main(){
    int k=2;
    int n = 5;
    int arr[]={1,2,3,4,5};
    int temp[5];

    for(int i=0; i<n; i++){
       temp[(i+k)% n]=arr[i];
        arr[i]=temp[i];
    }
    for(int i =0 ; i<n; i++){
        cout<<temp[i]<<" ";
    }
return 0;
}