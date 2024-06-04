#include<iostream>
#include<algorithm>
using namespace std;

int search(int arr[], int n, int key)
{
    sort(arr, arr+(n-1));
    int lo = 0;
    int hi = n-1;
    int mid = lo + (hi-lo)/2;
    while(lo <= hi)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        //go to right part
        if (key > arr[mid])
        {
           lo = mid+1;
        }
        else{
            hi = mid-1;
        }
        mid = lo + (hi - lo)/2;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n, key;
    cin>>n;
    cin>>key;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int index = search(arr, n, key);
    cout<<"The index of required number is "<<index<<endl;
    return 0;
}