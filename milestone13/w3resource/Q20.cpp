// 20. Write a program in C to find the first capital letter in a string using recursion.
#include <iostream>

using namespace std;

char capital(char str[])
{
    static int i = 0;
    if (i < strlen(str))
    {
        if (isupper(str[i]))
            return str[i];
        else
        {
            i++;
            return capital(str);
        }
    }
    else
        return 0;
}

int main()
{
    char str[20];
    cout << "Enter a str with at least 1 capital letter: ";
    cin >> str;
    char ans = capital(str);
    if (ans == 0)
        cout << "There's no capital letter in the enetered str" << endl;
    else
        cout << "The first capital letter in the entered string is: " << ans << endl;
    return 0;
}