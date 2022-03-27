// 21. Write a program in C for binary search using recursion.
#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int search, int start, int end)
{
    int mid, flag = 0;
    if (start <= end)
    {
        mid = (start + end) / 2;
        if (search == arr[mid])
        {
            flag = 1;
        }
        else if (search < arr[mid])
        {
            return binarySearch(arr, n, search, start, mid - 1);
        }
        else
            return binarySearch(arr, n, search, mid + 1, end);
    }
    else
        return flag;
}

int main()
{
    int arr[10], i, n, search, flag, start, end;
    cout << "Enter the size of the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> search;
    start = 0, end = n - 1;
    flag = binarySearch(arr, n, search, start, end);
    if (flag == 0)
        cout << "The number does not exist in the array" << endl;
    else
        cout << "The number exists in the array" << endl;
    return 0;
}