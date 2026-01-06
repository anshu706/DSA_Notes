// FIGURE OUT HOW TO FIND IF A NUMBER IS POWER OF 2 WITHOUT ANY LOOP

#include <iostream>
using namespace std;

int isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n;
    cout << "Enter a n: ";
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << n << " is a power of 2.";
    }
    else
    {
        cout << n << " is not a power of 2.";
    }

    return 0;
}
