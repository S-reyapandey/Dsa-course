#include<iostream>
#include<algorithm>
using namespace std;

bool isSorted(int *arr, int size)
{
    //base case
    if(size == 0 || size == 1)
    {
        return true;
    }
    //recursive relation
    if(arr[0] > arr[1])
    {
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
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
   
    bool ans =  isSorted(arr, n);

    if (ans)
    {
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted.  :)"<<endl;
    }
    return 0;
}