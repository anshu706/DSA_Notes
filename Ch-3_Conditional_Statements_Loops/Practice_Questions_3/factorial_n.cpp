// PRINT FACTORIAL OF A NUMBER N.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}