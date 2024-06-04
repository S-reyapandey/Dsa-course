#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i<n; i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    if(isPrime)
    {
        cout<<"It is a Prime Number"<<endl;

    }
    else
    {
        cout<<"It is not a prime number"<<endl;
    }

    return 0;
}