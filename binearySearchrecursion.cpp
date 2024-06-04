#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binearySearch(int *arr, int s, int e, int key)
{
    cout << endl;
    print(arr, s, e);
    // base case
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binearySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binearySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[7] = {11, 23, 34, 56, 59, 67, 98};
    int size = 7;
    int s = 0;
    int e = size;

    int key;
    cin >> key;

    bool ans = binearySearch(arr, s, e, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}