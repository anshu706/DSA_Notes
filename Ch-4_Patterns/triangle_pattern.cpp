// TRIANGLE PATTERN

/*
PRINT THIS PATTERN

*
* *
* * *
* * * *
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------

/*
PRINT THIS PATTERN
1
2 2
3 3 3
4 4 4 4
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << (i + 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------

/*
PRINT THIS PATTERN
1
1 2
1 2 3
1 2 3 4
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------

/*
REVERSE TRIANGLE PATTERN
1
2 1
3 2 1
4 3 2 1
*/
/*

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------

/*
FLOYD'S TRIANGLE PATTERN
1
2 3
4 5 6
7 8 9 10
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
*/

/*----------------------- Alphabet version -----------------------------
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
*/

//-------------------------------------------------------------------------------------------------

/*
INVERTED TRIANGLE PATTERN

1111
 222
  33
   4
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // nums
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }
    return 0;
}
*/
