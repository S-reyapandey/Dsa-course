#include<iostream>
using namespace std;

int main()
{
    int num = 1;
    char ch = '1';

    cout<< endl;
    switch(ch)
    {
        case 1: cout<<"First"<<endl;
        cout<<"First again"<<endl;
        break;

        case '1': switch (num)
        {
        case 1: cout<<"Value of num is "<<num<<endl;
            break;
        }
        break;
        default : cout<<"It is a dafault statement"<<endl;
        break;
    }
    return 0;
}