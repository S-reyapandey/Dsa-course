#include<iostream>
using namespace std;

int findPeak(int *arr, int s, int e)
{
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid] < arr[mid+1] && arr[mid+1] > arr[mid+2])
        {
            return mid+1;
        }
        if(arr[mid] < arr[mid+1])
        {
            return findPeak(arr, mid+1, e);
        }
        else{
            return findPeak(arr, s, mid);
        }
    }
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int s = 0;
    int e = n-1;
    int ans = findPeak(arr, s, e);

    cout<<"The index of the peak in a mountain is "<<ans<<endl;

    return 0;
}