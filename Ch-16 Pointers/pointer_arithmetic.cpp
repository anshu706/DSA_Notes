// Increment(++) / Decrement(--)

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr--;               // also ptr++;
    cout << ptr << endl; // +4

    return 0;
}

// Add / Subtract Number

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    return 0;
}

// Subtract Ptr

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int *ptr2;
    int *ptr1 = ptr2 + 2;
    cout << ptr1 - ptr2 << endl;

    return 0;
}

// Compare (<,<=,>,>=,==,!=)

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int *ptr1;
    int *ptr2;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1 < ptr2) << endl;
    cout << (ptr1 <= ptr2) << endl;
    cout << (ptr1 > ptr2) << endl;
    cout << (ptr1 >= ptr2) << endl;
    cout << (ptr1 == ptr2) << endl;
    cout << (ptr1 != ptr2) << endl;

    return 0;
}
