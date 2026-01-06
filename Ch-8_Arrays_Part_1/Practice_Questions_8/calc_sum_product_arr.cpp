// WAF TO CALCULATE SUM & PRODUCT OF ALL NUMBERS IN AN ARRAY

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
