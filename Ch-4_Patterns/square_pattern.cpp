// Square pattern

//----------------- PRINT THIS PATTERN ------------------------------------------
/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// ---------------- Character Pattern ----------------------------
/*
A B C D
A B C D
A B C D
A B C D
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}
*/

//---------------------- Stars Pattern -------------------------------
/*
 * * *
 * * *
 * * *
 * * *
 */

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
PRINT THIS PATTERN
1 2 3
4 5 6
7 8 9
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
*/
