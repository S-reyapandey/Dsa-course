#include<iostream>
using namespace std;



int AP(int n)
{
    return (3*n + 7);
}

int main()
{
    int n;
    cin>>n;
    int ans = AP(n);
    cout<<"The nth term of an Arthimetic progression is "<<ans<<endl;
    return 0;
}