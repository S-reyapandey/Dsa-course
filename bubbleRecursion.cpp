#include<iostream>
using namespace std;

void sortArray(int *arr, int n)
{
    //base case - already sorted
    if(n == 0 || n == 1)
    {
        return ;
    }
    for(int i = 0; i<n-1; i++)
    {
       if(arr[i] > arr[i+1])
       {
        swap(arr[i], arr[i+1]);
       } 
    }
    sortArray(arr, n-1);
}


int main()
{
    int arr[6] = { 8, 3, 4, 0, 9, 6};
    
    sortArray(arr, 6);
    for(int i = 0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}