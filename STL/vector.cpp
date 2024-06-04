#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size "<<v.capacity()<<endl;

    vector<int> a(5, 1);

    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.push_back(1);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"front element "<<v.front()<<endl;
    cout<<"back element "<<v.back()<<endl;

    cout<<"before pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"after pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
}

// Vector is a dynamic array