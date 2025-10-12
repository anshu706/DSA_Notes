// CALCULATE SUM OF NUMBERS FROM 1 TO N.

/*
#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{

    int n;
    cout << "Enter n:";
    cin >> n;

    cout << sumN(n) << endl;
    return 0;
}
*/

//---------------------------------------------------------------------------------

// CALCULATE N FACTORIAL

/*
#include <iostream>
using namespace std;

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << factorialN(n) << endl;
    return 0;
}
*/

//---------------------------------------------------------------------------------

// CALCULATE SUM OF DIGITS OF A NUMBER.
/*
#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main()
{
    int x;
    cout << "Enter x:";
    cin >> x;

    cout << "Sum =" << sumOfDigits(x) << endl;
    return 0;
}
*/

//---------------------------------------------------------------------------------

// CALCULATE nCr BINOMIAL COEFFICIENT FOR n & r

/*
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n = 6;
    int r = 3;

    cout << nCr(n, r) << endl;
    return 0;
}
*/

//---------------------------------------------------------------------------------

// ---------------------------------------------------------- H O M E W O R K -------------------------------------------------------------------------------------

// WAF TO CHECK IF A NUMBER IS PRIME OR NOT.
/*
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}
*/

//---------------------------------------------------------------------------------

// WAF TO PRINT ALL PRIME NUMBERS FROM 2 TO N.
/*
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Prime numbers from 2 to " << n << ": ";
    printPrimes(n);
    return 0;
}
*/

//---------------------------------------------------------------------------------

// WAF TO PRINT NTH FIBONACCI.
/*
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
*/

//---------------------------------------------------------------------------------
