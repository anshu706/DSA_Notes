// VARIABLES -> Containers to store Data

// DATA TYPES
// int - 4 Bytes
// char - 1 Byte
// float - 4 Bytes
// bool - 1 Byte
// double - 8 Bytes

#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    char grade = 'a';
    float PI = 3.14f;
    bool isSafe = true;
    double price = 100.99;

    cout << "Age is: \n"
         << age << endl;
    cout << PI << endl;

    cout << isSafe << endl; // true -> 1 & false -> 0
    return 0;
}