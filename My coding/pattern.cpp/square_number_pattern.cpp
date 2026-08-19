#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    int m, n;
    cout << "Enter row: ";
    cin >> n;

    cout << "Enter cols: ";
    cin >> m;

    for (int i = 0; i < n; i++)
    { // row

        for (int j = 0; j < m; j++)
        { // cols
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}