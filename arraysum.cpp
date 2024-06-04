#include<iostream>
using namespace std;

int arrsum(int arr[], int size) 
{
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum += arr[i];
    } 
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int Ar[7];
    for(int i = 0;i<n;i++)
    {
        cin>>Ar[i];
    }
    int ans;
    ans = arrsum( Ar, n);
    cout<<ans<<endl;
    return 0;
}