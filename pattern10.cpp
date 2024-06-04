#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int count = 1;
    int i = 1;
    while(i <= n)
    {
        int j =1;
        while(j<=n)
        {
            char ch = 'A'+count-1;
            cout<<ch<<" ";
            //ch = ch + count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}