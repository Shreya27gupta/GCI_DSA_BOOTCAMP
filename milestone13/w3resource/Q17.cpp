// 17. Write a program in C to calculate the power of any number using recursion.
#include <iostream>

using namespace std;
long int power(int x, int n)
{
    long int value = 1;
    if (n == 0)
        return value;
    return x * power(x, n - 1);
}
int main()
{
    int x, n;
    long int result;
    cout << "Enter the base value : ";
    cin >> x;
    cout << "Enter the power : ";
    cin >> n;
    result = power(x, n);
    cout << "the value of " << x << " to the power " << n << " is " << result;
    return 0;
}