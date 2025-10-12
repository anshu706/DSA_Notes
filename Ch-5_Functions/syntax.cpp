#include <iostream>
using namespace std;

// FUNCTION DEFINITION

// min of 2 numbers
int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a;
    cout << "Enter a:";
    cin >> a;

    int b;
    cout << "Enter b:";
    cin >> b;

    // FUNCTION CALL / INVOKE
    cout << "Min = " << minOfTwo(a, b) << endl;
    return 0;
}