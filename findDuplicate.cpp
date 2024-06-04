#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i<n;i++)
    {
        ans = ans^arr[i];
    }
    for(int i = 1; i<n; i++)
    {
        ans = ans^i;
    }
    cout<<ans;
    return ans;
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    findDuplicate(arr, n);
    //cout<<val<<endl;
    return 0;
}

