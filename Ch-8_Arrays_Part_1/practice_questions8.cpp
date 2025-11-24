// FIND SMALLEST/LARGEST IN ARRAY
/*
#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}
*/

// --------------------------------------------------------------------------------------------------------------

//  REVERSE AN ARRAY  [Two pointer approach]

/*
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 3};
    int size = 7;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

// WAF TO CALCULATE SUM & PRODUCT OF ALL NUMBERS IN AN ARRAY

/*
#include <iostream>
using namespace std;

int Sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int Product(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[] = {4, 3, 5, 6, 9, 1, 2};
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = Sum(arr, n);
    int product = Product(arr, n);

    cout << "\nSum of all elements = " << sum << endl;
    cout << "Product of all elements = " << product << endl;

    return 0;
}
*/

// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY

/*
#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n)
{
    if (n <= 0)
        return;

    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
        if (arr[i] < arr[minIndex])
            minIndex = i;
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main()
{
    int arr[100] = {2, 5, 7, 9, 8};
    int n = 5;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    swapMaxMin(arr, n);

    cout << "\nArray after swapping max and min elements:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
*/

// WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY.

/*
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
*/
