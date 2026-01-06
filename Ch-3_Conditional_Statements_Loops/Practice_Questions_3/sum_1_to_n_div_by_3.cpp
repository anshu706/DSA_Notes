// SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3.

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
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum of numbers from 1 to " << n << " \ndivisible by 3 is: " << sum << endl;
    return 0;
}