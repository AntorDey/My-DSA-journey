#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int sum = 0;
int arr[]= {-1,0,1,2,-1,-4};
    for(int i=0; i<n; i++){
        for(int j = i +1; j<n ; j++){
            for(int k =j+1; k<n ; k++){
                if(arr[i]+arr[j]+arr[k] == 0){
                    cout<<"Output is:" <<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        } 
    }
        
 }

return 0;

}
