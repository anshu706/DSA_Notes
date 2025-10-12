// FUNCTION IN MEMORY
// Every function is stored in Stack Memory in the form of stack frames.

// PASS BY VALUE - COPY OF ARGUMENT IS PASSED TO FUNCTION.
// PASS BY REFERENCE - ORIGINAL ARGUMENT IS PASSED TO FUNCTION.

#include <iostream>
using namespace std;

int changeX(int x)
{
    x = 2 * x;
    cout << "x = " << x << endl;
}

int main()
{
    int x = 5;
    changeX(x);

    cout << "x = " << x << endl;
    return 0;
}