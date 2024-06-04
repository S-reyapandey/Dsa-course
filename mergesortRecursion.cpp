#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s+(e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int minArrayIndex = s;
    for(int i = 0; i<len1; i++)
    {
        first[i] = arr[minArrayIndex++];
    }
    //int minArrayIndex = mid+1;
    for(int i = 0; i<len2; i++)
    {
        second[i] = arr[minArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    minArrayIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[minArrayIndex++] = first[index1++];
        }
        else{
            arr[minArrayIndex++] = second[index2++];
        }
    }
    while (index1<len1)
    {
        arr[minArrayIndex++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[minArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
    
}

void mergeSort(int *arr, int s, int e)
{
    int mid = s + (e-s)/2;
    //base case
    if(s>e)
    {
        return ;
    }

    //left part-sort
    mergeSort(arr, s, mid);

    //right part
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);
}
int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0;i<n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}