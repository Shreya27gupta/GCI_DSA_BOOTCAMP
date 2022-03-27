// Write a program in C to find the sum of digits of a number using recursion
#include <iostream>

using namespace std;
int sum_digit(int n)
{
    if (n == 0)
        return 0;

    return ((n % 10) + sum_digit(n / 10));
}
int main()
{
    int n, sum;
    cout << "Enter the number whose sum of digits is to be found : ";
    cin >> n;
    sum = sum_digit(n);
    cout << "the sum of digits is " << sum;
    return 0;
}