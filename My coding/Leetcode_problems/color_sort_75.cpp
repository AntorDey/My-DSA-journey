#include<iostream>
using namespace std;
int main(){
    int n = 7;
    int start = 0;
    int mid = 0;
    int end = n-1;
    int arr[]={1 , 0, 2, 0, 0, 2, 1};

    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]);
            mid++;
            start++;
        }else if(arr[mid]==1){          //very important problem;
            mid++;
        }
        else{
            swap(arr[mid], arr[end]);
            end--;
        }
    } 
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
}

