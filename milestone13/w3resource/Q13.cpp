// 13. Write a program in C to find the LCM of two numbers using recursion.
#include <iostream>

using namespace std;
int lcm(int a, int b)
{
    static int m = 0;
    m += b;
    if ((m % a == 0) && (m % b == 0))
        return m;
    else
        lcm(a, b);
}
int main()
{
    int n1, n2, lcmOf;
    cout << "Enter the first number :";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    if (n1 > n2)
        lcmOf = lcm(n2, n1);
    else
        lcmOf = lcm(n1, n2);
    cout << " The LCM is " << lcmOf;
    return 0;
}