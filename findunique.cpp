#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;
    for(int i = 0; i<n ; i++)
    {
       ans = ans^arr[i];
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

    findUnique(arr, n);

    return 0;
}

// XOR function property is that it make zero for 2 same element
// i.e 2^2 = 0; 0^2 = 2