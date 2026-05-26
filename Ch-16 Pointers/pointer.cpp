// Pointers -> Special variables that store address of other variables

#include <iostream>
using namespace std;
int main()
{
    float price = 100.25f;
    float *ptr = &price;

    cout << ptr << endl;
    cout << &price << endl;

    return 0;
}

// Pointer to Pointer

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    int **parPtr = &ptr;

    cout << &ptr << endl;

    cout << &ptr << endl;
    cout << parPtr << endl;

    return 0;
}

// Deferencing Operator -> Symbol - '*'

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;

    int **parPtr = &ptr;

    cout << *(&a) << endl;
    cout << *(ptr) << endl;
    cout << **(parPtr) << endl;

    return 0;
}

// NULL Pointer

#include <iostream>
using namespace std;
int main()
{
    int **ptr = NULL;

    cout << *ptr << endl;

    return 0;
}