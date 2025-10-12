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
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Result: " << (a + b) << endl;
        break;
    case '-':
        cout << "Result: " << (a - b) << endl;
        break;
    case '*':
        cout << "Result: " << (a * b) << endl;
        break;
    case '/':
        if (b != 0)
            cout << "Result: " << (a / b) << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    case '%':
        if (b != 0)
            cout << "Result: " << (a % b) << endl;
        else
            cout << "Error: Modulo by zero!" << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }
    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------------
