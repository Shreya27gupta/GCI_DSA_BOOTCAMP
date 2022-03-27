// 11. Write a program in C to convert a decimal number to binary using recursion.
#include <iostream>

using namespace std;
long int n;
static int i = 0;
int *tobinary(long int n)
{
    static int arr[20];
    if (n == 0)
        return 0;
    arr[i] = n % 2;
    n = n / 2;
    i++;
    tobinary(n);
    return arr;
}
int main()
{
    int *arr;
    cout << "Enter the decimal number to convert ot binary : ";
    cin >> n;
    arr = tobinary(n);
    cout << "Binary value is : ";
    for (i; i >= 0; i--)
    {
        cout << arr[i];
    }
    return 0;
}