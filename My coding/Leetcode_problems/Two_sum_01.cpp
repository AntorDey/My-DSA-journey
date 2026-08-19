#include <iostream>
using namespace std;

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target ;
    cout<<"Enter target:";
    cin>>target;
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Indices: " << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "No solution found";
    return 0;
}