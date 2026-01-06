// WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY.

#include <iostream>
using namespace std;

void printUnique(int arr[], int n)
{
    cout << "\nUnique elements are: ";
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 8, 7, 8, 9, 0};
    int n = 15;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    printUnique(arr, n);
    return 0;
}
