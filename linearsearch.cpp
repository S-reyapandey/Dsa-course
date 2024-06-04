#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
      for(int i = 0; i<size; i++)
      {
         if(arr[i] == key)
         {
            return 1;
         }
         else{
            return 0;
         }
      }
}

int main()
{
    int arr[10] = { 2, -4, 5, -9, 0, 1, -2, 7};
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);

    if(found)
    {
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is absent "<<endl;
    }
    return 0;
}