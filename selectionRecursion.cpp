#include <iostream>
using namespace std;

void selectionSort(int *arr, int n, int i)
{
    if( i == n)
    {
        return ;
    }
    int min_index = i;
    for(int j = i+1; j<n;j++)
    {
        if(arr[j] < arr[min_index])
        {
            min_index = j;
        }
    }
    swap(arr[min_index], arr[i]);
    selectionSort(arr, n, i+1);
}

int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}