#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "Shreya";
    m[2] = "pandey";
    m[12] = "Dsa";
    m[0] = "hehe";

    m.insert({5, "chutiya"});

    cout<<"before erase "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 12->"<<m.count(12)<<endl;

    m.erase(12);
    cout<<"after erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(2);
    for(auto i = it; i!= m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    return 0;
}

//map is a data structure in which our data is stored in sorted form in the form key
//complexity O(logn)