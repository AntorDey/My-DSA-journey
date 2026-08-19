#include<iostream>
using namespace std;
int main(){
int n=6;
int arr[]= {3,5,3,12,2,4};
int max1,max2;

if(arr[1]>arr[0]){
    max1=arr[1];
    max2=arr[0];
}
else{
    max2=arr[1];
    max1=arr[0];
}
for(int i=2; i<n; i++){
    if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }

    else if(arr[i]>max2){
        max2=arr[i];
    }
}
cout<<"2nd largest is:"<<max2;

return 0;
}

