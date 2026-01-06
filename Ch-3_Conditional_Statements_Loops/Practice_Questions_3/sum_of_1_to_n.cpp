// PRINT SUM OF NUMBERES FROM 1 TO N.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        cout << i << " ";
    }

    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     cout << i << " ";
    //     i++;
    // }
    cout << "Sum = " << sum << endl;
    return 0;
}
