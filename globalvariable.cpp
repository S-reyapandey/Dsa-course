#include <iostream>
using namespace std;

int score = 5;

void b(int &i)
{
    cout<<score<<endl;
    cout << i+1 << endl;
}

void a(int &i)
{
    cout << i << endl;
    b(i);
}

int main()
{
    int i = 5;
    cout<<score<<" in main"<<endl;
    a(i);
    b(i);
    cout<<i<<endl;

    return 0;
}