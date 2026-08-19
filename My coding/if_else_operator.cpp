#include<iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter the marks:";
   cin>>n;

if(n>=90){
    cout << "Very good" << endl; 

}else if(n>=80){
    cout<<"GOOD" <<endl;
}
else if( n>=101){
    cout<<"Marks is not valid";
}

return 0;
}

