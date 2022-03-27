// 9. Write a program in C to reverse a string using recursion.
#include <iostream>

using namespace std;
char *reverse(char str[])
{
    static int i = 0;
    static char rev[20];
    if (*str)
    {
        reverse(str + 1);
        rev[i++] = *str;
    }
    return rev;
}
int main()
{
    char str[20], *result;
    cout << "Enter your string : ";
    cin >> str;
    result = reverse(str);
    cout << "The reversed string is : " << result;
    return 0;
}