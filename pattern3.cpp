#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int count = 1;
    int i = 0;
    while(i<n)
    {
        int j = 1;
        while(j <= n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}