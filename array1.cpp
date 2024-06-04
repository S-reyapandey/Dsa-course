#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"printing the array "<<endl;
    //print the array
    for(int i = 0; i < size; i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing done "<<endl;
}

int main()
{
    int number[15];

    cout<<"Value at 15 index "<<number[14]<<endl;
    //cout<<"Value at 20 index "<<number[20]<<endl;
    int second[3] = { 5, 7, 9};
    cout<<"Value at 2 index "<<second[2]<<endl;
    cout<<"Value at 6 index "<<second[5]<<endl;

    int third[15] = { 2, 7};

    int n = 15;
    
    printArray(third , 15);

    int fourth[10] = {2};
    n = 10;
    printArray(fourth, 10);

    int fouthsize = sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is "<<fouthsize<<endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout<<ch[3]<<endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    return 0;
}