// LOOPS
// Qs. Print numbers 1 to 5

//--------------WHILE LOOP----------------------------------

/*
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int count = 1;
    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}
*/

//--------------------FOR LOOP----------------------------------

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/

//------------------------DO-WHILE LOOP-------------------------

/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}
*/