#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n)
{
    for(int i = 0; i<n ; i = i+2)
    {
        if(i+1<n)
        {
            int sw = i;
            swap(arr[sw], arr[sw+1]);
        }
        
    }
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    swapAlternate(arr, n);

    printArray(arr, n);
    return 0;
}