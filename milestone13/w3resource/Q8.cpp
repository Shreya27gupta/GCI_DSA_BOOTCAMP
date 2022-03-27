// 8. Write a program in C to get the largest element of an array using recursion.
#include <iostream>

using namespace std;
int n;
int greatest_element(int arr[])
{
    static int i = 0, greatest = 0;
    if (i < n)
    {
        if (arr[i] > greatest)
            greatest = arr[i];
        i++;
        greatest_element(arr);
    }
    return greatest;
}
int main()
{
    int i, arr[10], greatest;
    cout << "Input the number of elements in array : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the positive value at position " << i + 1 << " : ";
        cin >> arr[i];
    }
    greatest = greatest_element(arr);
    cout << "The greatest element in the array is " << greatest;
    return 0;
}