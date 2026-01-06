// WAF TO REVERSE AN INTEGER N.

#include <iostream>
using namespace std;

int RevNum(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter a n: ";
    cin >> n;

    cout << "Reversed number: " << RevNum(n);
    return 0;
}
