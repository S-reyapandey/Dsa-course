#include<iostream>
using namespace std;

void insertionSort(int *arr, int n, int i)
{
    //base-case
    if(i == n){
        return ;
    }
    int j = i;
    int ele = arr[i];
    while(j>0 && ele < arr[j-1])
    {
        arr[j] = arr[j-1];
        j--;
    }
    arr[j] = ele;
    insertionSort(arr, n, i+1);
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>> arr[i];
    }
    
    insertionSort(arr, n, 1);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}