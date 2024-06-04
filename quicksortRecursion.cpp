#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // for left one
    quickSort(arr, s, p - 1);

    // for right one
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr;
    int n, element;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}