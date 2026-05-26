/*

Question..

#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;

    return 0;
}
*/

// Answer..

/*

*(ptr + 1) -> 20
*(ptr + 3) -> 40
*ptr -> 20

*/