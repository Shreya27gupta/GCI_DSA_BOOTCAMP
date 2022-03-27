// 14. Write a program in C to print even or odd numbers in given range using recursion.
#include <iostream>
using namespace std;
void evenodd(int a, int n)
{
    if (a > n)
        return;
    cout << a << " ";
    evenodd(a + 2, n);
}
int main()
{
    int n;
    cout << "Input the range to print starting from 1 :";
    cin >> n;
    cout << "\nAll the even numbers in this range are : " << endl;
    evenodd(2, n);
    cout << "\nAll the odd numbers in this range are : " << endl;
    evenodd(1, n);
    return 0;
}