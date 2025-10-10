// IF-ELSE
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    return 0;
}
*/

// IF - ELSE IF - ELSE

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks:";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade A+";
    }
    else if (marks < 90 && marks >= 80)
    {
        cout << "Grade B";
    }
    else if (marks < 80 && marks >= 70)
    {
        cout << "Grade C";
    }
    else if (marks < 70 && marks >= 60)
    {
        cout << "Grade D";
    }
    else if (marks < 60 && marks >= 50)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "Grade F";
    }

    return 0;
}