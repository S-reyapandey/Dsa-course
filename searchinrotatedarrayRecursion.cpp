#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int getPivot(int *arr, int s, int e, int n)
{
    int mid = s + (e-s)/2;
    if(s>=e)
    {
        return s;
    }
   // while(s<e)
    //{
        if(arr[mid]>=arr[0])
        {
            return getPivot(arr, mid+1, e, n);
        }
        else{
            return getPivot(arr, s, mid, n);
        }
    //}

}

int binarySearch(int *arr, int s, int e, int k)
{
    int mid = s + (e-s)/2;
    if(s>e)
    {
        return -1;
    }
    while(s<=e)
    {
        if(arr[mid] = k)
        {
            return mid;
        }
        else if(arr[mid] < k)
        {
            return binarySearch(arr, mid+1, e, k);
        }
        else{
            return binarySearch(arr, s, mid-1, k);
        }
    }
}

int findPosition(int *arr, int n , int k)
{
    int s = 0;
    int e = n-1;
    int pivot = getPivot(arr, s, e, n);
    if(k >= arr[pivot] && k<=arr[n-1])
    {
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
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
    int k;
    cin>>k;
    int ans = findPosition(arr, n ,k);
    cout<<"The index at which "<<k<<" is present in arr "<<ans<<endl;

}