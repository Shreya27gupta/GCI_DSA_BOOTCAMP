// 19. Write a program in C to copy One string to another using recursion.
#include <iostream>

using namespace std;

char str2[20];
void strcopy(char str1[])
{
    static int i = 0;
    str2[i] = str1[i];
    if (str1[i] == '\0')
        return;
    i++;
    strcopy(str1);
}

int main()
{
    char str1[20];
    cout << "Enter a string: ";
    cin >> str1;
    strcopy(str1);
    cout << "The copied string: " << str2;
    return 0;
}