// 16. Write a program in C to Check whether a given String is Palindrome or not.
#include <iostream>

using namespace std;

char str[10];

void Palindrome(int i)
{
    int len = strlen(str) - i - 1;
    if (str[i] == str[len])
    {
        {
            if ((i + 1 == len) || (i = len))
            {
                cout << "Entered string is a palindrome" << endl;
                return;
            }
        }
        Palindrome(i + 1);
    }
    else
    {
        cout << "Entered string is not a palindrome" << endl;
        return;
    }
}

int main()
{
    cout << "Enter a string: ";
    cin >> str;
    int ans;
    Palindrome(0);
    return 0;
}