#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << "1st : " << *c << endl;
    cout << "2nd : " << c << endl;
    cout << "3rd : " << &c << endl;
    cout << "4th : " << (*c) + 1 << endl;
    cout << "5th : " << (c + 1) << endl;
    cout << "6th : " << *(c + 1) << endl;
    // cout << "7th : " << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    return 0;
}