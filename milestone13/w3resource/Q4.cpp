// 4. Write a program in C to print the array elements using recursion.
#include <iostream>

using namespace std;
void print_array(int arr[6], int a, int n) // n->length of array ; a=to begin with first element of array
{
    if (a >= n)
        return;

    cout << arr[a] << " ";
    a++;
    print_array(arr, a, n);
}
int main()
{
    system("clear");
    int arr[6];
    cout << "Input 6 elements in the array : \n";
    for (int i = 0; i < 6; i++)
    {
        cout << "element " << i << " : ";
        cin >> arr[i];
    }
    cout << "The elements in the array are : ";
    print_array(arr, 0, 6);
    return 0;
}