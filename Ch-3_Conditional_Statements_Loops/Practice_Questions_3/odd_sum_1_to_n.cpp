// SUM OF ALL ODD NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int oddSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            oddSum += i;
        }
    }

    // int i = 1;
    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << " ";
    //         oddSum += i;
    //     }
    //     i++;
    // }

    cout << "\nSum is " << oddSum;
    return 0;
}
