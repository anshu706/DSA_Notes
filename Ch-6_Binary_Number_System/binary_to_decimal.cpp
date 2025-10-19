// CONVERSION OF A NUMBER FROM BINARY FORM TO DECIMAL FORM.

#include <iostream>
using namespace std;

int BinToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans; // decimal form
}
int main()
{
    int binNum;
    cout << "Enter Binary Number:";
    cin >> binNum;

    cout << BinToDecimal(binNum) << endl;
    return 0;
}