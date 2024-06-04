#include<iostream>
using namespace std;

bool found(int *arr, int size, int key)
{
    if(size == 0)
    {
        return false;
    }


    if(key == arr[0])
    {
        return true;
    }
    else{
        bool remainingPart = found(arr+1, size-1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[6] = {1, 2, 54, 12, 8, 67};
    int size = 6;
    int key ;
    cin>>key;

    bool ans = found(arr, size, key);
    if(ans )
    {
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}