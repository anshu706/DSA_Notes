// FIND CHARACTER LOWERCASE OR UPPPERCASE

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

//--------------------------------------------------------------------

// WITH ASCII VALUES (same question as above)

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
