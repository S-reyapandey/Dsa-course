#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid+1;
            e = mid-1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid+1;
            s = mid+1;
        }
        else if(key > arr[mid])
        {
            s = mid + 1;
        }
        else if(key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[1000];
    int n, key;
    cin>>n;
    cin>>key;
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"First Occurance of key is "<<firstOcc(arr, n, key)<<endl;;
    cout<<"Last Occurance of key is "<<lastOcc(arr, n, key)<<endl;
    return 0;
}