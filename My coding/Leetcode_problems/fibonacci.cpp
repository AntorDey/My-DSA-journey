// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int ans = 0;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 int sum = a[i] + a[j];

//                 // check all bits are 1
//                 if ((sum & (sum + 1)) == 0)
//                 {
//                     ans = 1;
//                 }
//             }
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int n;
char ans[20];
char st[20];
int top = -1;

void generate(int pos, int open, int close)
{
    if (pos == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i];
        }
        cout << endl;
        return;
    }

    // 1. Try '('
    if (open < n / 2)
    {
        ans[pos] = '(';
        st[++top] = '(';

        generate(pos + 1, open + 1, close);

        top--;
    }

    // 2. Try ')'
    if (top >= 0 && st[top] == '(')
    {
        ans[pos] = ')';
        top--;

        generate(pos + 1, open, close + 1);

        st[++top] = '(';
    }

    // 3. Try '['
    if (open < n / 2)
    {
        ans[pos] = '[';
        st[++top] = '[';

        generate(pos + 1, open + 1, close);

        top--;
    }

    // 4. Try ']'
    if (top >= 0 && st[top] == '[')
    {
        ans[pos] = ']';
        top--;

        generate(pos + 1, open, close + 1);

        st[++top] = '[';
    }
}

int main()
{
    cin >> n;

    if (n % 2 != 0)
        return 0;

    generate(0, 0, 0);

    return 0;
}