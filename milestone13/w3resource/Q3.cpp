#include <iostream>
using namespace std;
int n;
int fibonacci(int t1, int t2)
{
    int next;
    static int i = 1;
    if (i == n)
    {
        return 0;
    }
    else
    {
        next = t1 + t2; // next is a temporary variable to store the sum of previous two terms
        t1 = t2;
        t2 = next;
        cout << t2 << " ";
    }
    i++;
    fibonacci(t1, t2);
    return 0;
}
int main()
{
    int a = 0, b = 1;
    cout << "Input number of terms for the series : ";
    cin >> n;
    cout << "the series is : ";
    cout << "1 ";
    fibonacci(a, b);
    return 0;
}