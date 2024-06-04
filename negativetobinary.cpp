#include<iostream>
#include<math.h>
using namespace std;

int decimaltobinary(int n)
{
    int ans = 0;
    int i = 0;
    while(n != 0)
    {
        int bit = n&1;
        ans = ( bit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        n = n*(-1);
        int ans = decimaltobinary(n);
        //Firstly find 1's complement
        int newAns = (~ans);
        //now take 2's complement by adding 1 
        newAns = newAns + 1;
        cout<<newAns<<endl;
    }
    else{
        int ans = decimaltobinary(n);
        cout<<ans<<endl;
    }
    
    return 0;
}