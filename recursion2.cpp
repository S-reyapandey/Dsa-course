#include<iostream>
using namespace std;

void printCounting(int n)
{
    /*if(n == 0)
    {
       // return 0;
       return;
    }*/

    cout<< n <<endl;

    printCounting(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    printCounting(n);

    return 0;
}