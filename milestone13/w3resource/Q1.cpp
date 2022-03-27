// 1. Write a program in C to print first 50 natural numbers using recursion
#include<iostream>
using namespace std;
void natural_number(int n)
{
    if(n<=50)
    {
        cout<<n<<" ";
        natural_number(n+1);
    }
}
int main()
{
    system("clear");
    int n=1;
    cout<<"First 50 Natural numbers: \n";
    natural_number(n);
    return 0;
}