#include <iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    return n + sum(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Sum is: "<<sum<< endl;
}



// #include<iostream>
// using namespace std;

// int main(){             using for loops.
//     int n=5;
//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum +=i;
//         cout<<i<<" ";
        
//        } 
//        cout<<"Sum is: " <<sum<<endl;
    
// }