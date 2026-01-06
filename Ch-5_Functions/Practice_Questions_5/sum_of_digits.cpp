// CALCULATE SUM OF DIGITS OF A NUMBER.

#include <iostream>
using namespace std;

int sumOfDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main()
{
    int x;
    cout << "Enter x:";
    cin >> x;

    cout << "Sum =" << sumOfDigits(x) << endl;
    return 0;
}
