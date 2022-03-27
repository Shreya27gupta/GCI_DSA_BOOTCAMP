// 2. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1) // base condition
        return 1;
    else
        return n + sum(n - 1);
}
int main()
{
    int n, a;
    cout << "Enter the value of n to calculate sum from 1 to n : ";
    cin >> n;
    a = sum(n);
    cout << "the sum of numbers from 1 to " << n << " is: " << a;
    return 0;
}