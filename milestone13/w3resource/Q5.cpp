// 5. Write a program in C to count the digits of a given number using recursion.
#include <iostream>

using namespace std;
int digits(int n)
{
    if (n == 0)
        return 0;
    while (n != 0)
    {
        return 1 + digits(n / 10);
    }
    return 0;
}

int main()
{
    int n, number;
    cout << "Enter your number : ";
    cin >> n;
    number = digits(n);
    cout << "\nThe number of digits is : " << number;
    return 0;
}