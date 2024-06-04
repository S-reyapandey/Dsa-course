#include <iostream>
using namespace std;

void update(int **p)
{
    p = p + 1;
    // kuch change hoga ? -> no

    //*p = *p + 1;
    // kuch change hoga? -> yes

    //**p = **p + 1;
    // kuch change hoga? -> yes
}

int main()
{
    /*
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "1st : "
         << "printing ptr " << ptr << endl;
    cout << "2nd : "
         << "address of ptr " << &ptr << endl;
    cout << "3rd : " << *ptr2 << endl;
    cout << "4th : " << i << endl;
    cout << "5th : " << *ptr << endl;
    cout << "6th : " << **ptr2 << endl;
    cout << "7th : " << &i << endl;
    cout << "8th : " << ptr << endl;
    cout << "9th : " << *ptr2 << endl;
    cout << "10th : " << (ptr2 + 1) << endl;

    cout << endl
         << endl;
    cout << "before : " << i << endl;
    cout << "before : " << ptr << endl;
    cout << "before : " << ptr2<<endl;
    update(ptr2);
    cout << "after : " << i << endl;
    cout << "after : " << ptr << endl;
    cout << "after : " << ptr2 << endl;
    cout << endl
         << endl;
    */
    
    



    return 0;
}