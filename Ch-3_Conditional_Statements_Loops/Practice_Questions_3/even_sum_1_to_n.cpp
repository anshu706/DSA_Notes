// PRINT SUM OF ALL EVEN NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int evenSum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            evenSum += i;
        }
    }
    cout << "\nSum is " << evenSum;
    return 0;
}
