// 6 & 10

/*
#include <iostream>
using namespace std;
int main()
{
    cout << (6 & 10) << endl;
    return 0;
}
*/

// 6 | 10

/*
#include <iostream>
using namespace std;
int main()
{
    cout << (6 | 10) << endl;
    return 0;
}
*/

// 6 ^ 10

/*
#include <iostream>
using namespace std;
int main()
{
    cout << (6 ^ 10) << endl;
    return 0;
}
*/

// 10 << 2

/*
#include <iostream>
using namespace std;
int main()
{
    cout << (10 << 2) << endl;
    return 0;
}
*/

// 10 >> 1

/*
#include <iostream>
using namespace std;
int main()
{
    cout << (10 << 1) << endl;
    return 0;
}
*/

// FIGURE OUT HOW TO FIND IF A NUMBER IS POWER OF 2 WITHOUT ANY LOOP

/*
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
*/

// WAF TO REVERSE AN INTEGER N.

/*
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
*/
