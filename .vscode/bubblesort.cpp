#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for(int i = 1; i<n; i++)
    {
        //for round 1 to n-1
        bool swapped = false;

        for(int j = 0; j<n-i; j++)
        {
            //process till n-ith index
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            //already sorted
            break;
        }
       
    }
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0; i< n; i++)
    {
       cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}