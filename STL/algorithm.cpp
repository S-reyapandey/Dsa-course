#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);
    v.push_back(13);

    cout<<"findind element -> "<<binary_search(v.begin(), v.end(), 5)<<endl;
    cout<<"lower bound -> "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"upper bound -> "<<upper_bound(v.begin(), v.end(), 3)-v.begin()<<endl;
    int a = 3;
    int b = 5;

    cout<<"max->"<<max(a,b)<<endl;
    cout<<"min->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a-> "<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"string-> "<<abcd<<endl;

    rotate(v.begin(), v.begin()+1,v.end());
    cout<<"after rotate "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}