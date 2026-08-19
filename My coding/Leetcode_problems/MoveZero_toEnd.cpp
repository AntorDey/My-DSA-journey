// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int arr[]= {0,1,4,0,5,2};
// int n = 6;
// vector<int>temp;

// for(int i=0; i<n ; i++){
//     if(arr[i]!=0){
//         temp.push_back(arr[i]);
//     }
// }                              //brout froce solution!
// int nz = temp.size();
// for(int i=0; i<temp.size(); i++){
//     arr[i]= temp[i];
// }

// for(int i = nz; i<n ; i++){
//     arr[i] = 0;
// }
// for(int i = 0; i<n ;i++){
// cout<<arr[i]<<" ";

// }

// }

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {0, 1, 4, 0, 5, 2};
    int n = 6;

    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 0)
        {                             //most optimal solution;
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}