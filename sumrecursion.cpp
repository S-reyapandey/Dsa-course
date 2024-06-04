#include<iostream>
using namespace std;

int recursionSum(int *arr, int size)
{
    if(size == 0)
    {
        return 0;
    }

    if(size == 1)
    {
        return arr[0];
    }

    int result = arr[size-1] + recursionSum(arr, size-1);
    return result;
}

int main()
{
    int arr[5] = { 1, 2 , 3, 4, 5};
    int  size = 5;

    int ans = recursionSum(arr, size);

    cout<<ans<<endl;

    return 0;
}