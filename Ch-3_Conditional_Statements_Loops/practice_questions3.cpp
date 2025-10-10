// FIND CHARACTER LOWERCASE OR UPPPERCASE

/*
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter char:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UPPERCASE\n";
    }
    else
    {
        cout << "Not A valid input";
    }

    return 0;
}
*/

//--------------------------------------------------------------------

// WITH ASCII VALUES (same question as above)

/*
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter char:";
    cin >> ch;

    if (ch >= 97 && ch <= 122)
    {
        cout << "lowercase\n";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "UPPERCASE\n";
    }
    else
    {
        cout << "Not A valid input";
    }

    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------

// PRINT NUMBERS 1 TO N.
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 1;
    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------

// PRINT SUM OF NUMBERES FROM 1 TO N.
/*
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
*/

//----------------------------------------------------------------------------------------------------------------

// SUM OF ALL ODD NUMBERS FROM 1 TO N

/*
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
*/

//----------------------------------------------------------------------------------------------------------------

// PRINT SUM OF ALL EVEN NUMBERS FROM 1 TO N
/*
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
*/

//----------------------------------------------------------------------------------------------------------------

// CHECK IF A NUMBER IS PRIME OR NOT. [IMPORTANT]

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) // i<=n-1
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "Prime Number\n";
    }
    else
    {
        cout << "Non Prime Number\n";
    }

    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------------

//-------------------------------------------------- HOMEWORK --------------------------------------------------------------------------------------

// SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3.

#include <iostream>
using namespace std;
int main()
{

    return 0;
}

//----------------------------------------------------------------------------------------------------------------

// PRINT FACTORIAL OF A NUMBER N.

//----------------------------------------------------------------------------------------------------------------
