#include<iostream>
using namespace std;

void reverse(string &s, int i, int j)
{
    cout<<"call received for "<<s<<endl;
    //base case
    if(i>j)
    {
        return ;
    }
    swap(s[i], s[j]);
    i++;
    j--;

    //recursive call
    reverse(s, i, j);
}

int main()
{
    string s = "shreya";
    reverse(s, 0 , s.length()-1);
    cout<<s<<endl;
    return 0;
}