#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans = 0;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
           ans = i-j+1;
           cout<<ans<<" ";
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}