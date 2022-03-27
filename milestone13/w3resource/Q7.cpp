// 7. Write a program in C to find GCD of two numbers using recursion.
#include <iostream>
int a, b;
using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int a, b, result;
    cout << "Program to find gcd of two integers.\n\n";
    cout << "Enter the first integer : ";
    cin >> a;
    cout << "\nEnter the second integer : ";
    cin >> b;
    result = gcd(a, b);
    cout << "GCD of the two entered integers is " << result;
    return 0;
}