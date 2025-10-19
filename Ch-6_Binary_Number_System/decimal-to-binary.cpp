// CONERSION OF A NUMBER FROM DECIMAL FORM TO BINARY FORM.

#include <iostream>
using namespace std;

int DecToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // binary form
}

int main()
{
    int decNum;
    cout << "Enter Decimal Number:";
    cin >> decNum;

    cout << DecToBinary(decNum) << endl;

    return 0;
}