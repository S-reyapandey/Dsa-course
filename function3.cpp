#include<iostream>
using namespace std;

int fac(int m)
{
   if(m == 0)
   {
    return 1;
   }
   else{
    return (m*(fac(m-1)));
   }
}

int nCr(int n, int r)
{
    int ans;
    if(n>r)
    {
    ans = (fac(n))/(fac(r)*fac(n-r));
    return ans;
    }
    else{
     
     return 0;
    }
    
}

int main()
{
    int a, b;
    cin>>a>>b;
    int Value = nCr(a, b);
    cout<<"The nCr value is "<<Value<<endl;   
    return 0;
}