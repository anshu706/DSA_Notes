// SUM OF 2 NUMBERS
/*
#include <iostream>

using namespace std;
int main()
{
    int a;
    cout << "Enter a: " << endl;
    cin >> a;

    int b;
    cout << "Enter b: " << endl;
    cin >> b;

    int sum = a + b;
    cout << "Sum is: " << sum << endl;
    return 0;
}
*/
// CALCULATOR [+,-,*,/]

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    cout << "sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = " << (a * b) << endl;
    cout << "division = " << (a / b) << endl;
    cout << "modulo = " << (a % b) << endl;
    return 0;
}