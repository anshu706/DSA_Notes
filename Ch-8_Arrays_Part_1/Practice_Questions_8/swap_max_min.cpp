// WAF TO SWAP THE MAX & MIN NUMBER OF AN ARRAY

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
