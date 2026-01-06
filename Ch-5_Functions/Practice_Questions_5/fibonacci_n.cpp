// WAF TO PRINT NTH FIBONACCI.

#include <iostream>
using namespace std;

int nthFibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int a = 0, b = 1, fib = 1;
    for (int i = 3; i <= n; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

void printFibonacciSequence(int n)
{
    if (n <= 0)
        return;
    if (n >= 1)
        cout << 0 << " ";
    if (n >= 2)
        cout << 1 << " ";
    int a = 0, b = 1, fib;
    for (int i = 3; i <= n; i++)
    {
        fib = a + b;
        cout << fib << " ";
        a = b;
        b = fib;
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci sequence up to " << n << ": ";
    printFibonacciSequence(n);
    cout << n << "th Fibonacci number is: " << nthFibonacci(n) << endl;
}
