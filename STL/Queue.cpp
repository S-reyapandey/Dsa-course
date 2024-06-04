//first in first out
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Shreya");
    q.push("Pandey");
    q.push("Mnit");
    q.push("Jaipur");

    cout<<"Size before pop "<<q.size()<<endl;
    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;
    
    cout<<"Size after pop "<<q.size()<<endl;

}