// 12. Write a program in C to check a number is a prime number or not using recursion.
#include <iostream>

using namespace std;
int i;
int ifprime(int n)
{
    if (i == 1)
    {
        return 1;
    }
    else if (n % i == 0)
    {
        return 0;
    }
    else
    {
        i = i - 1;
        ifprime(n);
    }
}
int main()
{
    system("clear");
    int n, flag = 0;
    cout << "enter any positive number : ";
    cin >> n;
    i = n / 2;
    flag = ifprime(n);
    if (flag == 1)
        cout << "The number is a prime number.";
    else
        cout << "The number is not a prime number.";
    return 0;
}