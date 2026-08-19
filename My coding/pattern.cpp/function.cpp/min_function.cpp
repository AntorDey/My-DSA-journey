#include <iostream>
using namespace std;

int minOfTwo(int a, int b) //perameters
{

    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "min=" << minOfTwo(5, 3) << endl; //arguments

    return 0;
}