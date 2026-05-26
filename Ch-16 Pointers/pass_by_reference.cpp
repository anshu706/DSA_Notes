// PASS BY REFERENCE (refresher)

/*
--------- Pointers way -------------------
*/

#include <iostream>
using namespace std;

void changeA(int *ptr)
{ // pass by reference using pointers
    *ptr = 20;
}

int main()
{

    int a = 10;
    changeA(&a);

    cout << "inside main fnx: " << a << endl; // 20

    return 0;
}

/*
------------ References(alias) Way ---------------------
*/

#include <iostream>
using namespace std;

void changeA(int &b)
{ // pass by reference using alias
    b = 20;
}

int main()
{

    int a = 10;
    changeA(a);

    cout << "inside main fnx: " << a << endl; // 20

    return 0;
}