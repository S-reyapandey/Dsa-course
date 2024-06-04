#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 0;
   /* while(i < n)
    {
       int j = n;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
          i++;
    }*/

    while(i < n)
    {
        int j =1;
        while(j<=n)
        {
            int ans;
            ans = n-j+1;
            cout<<ans<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
