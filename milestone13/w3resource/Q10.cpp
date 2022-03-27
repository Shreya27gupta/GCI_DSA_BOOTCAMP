// 10. Write a program in C to find the Factorial of a number using recursion
#include <iostream>

using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int fact, n;
    cout << "Enter the number : ";
    cin >> n;
    fact = factorial(n);
    cout << "\nThe value of factorial is " << fact;
    return 0;
}