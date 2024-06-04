#include<iostream>
#include<vector>
using namespace std;

int getPivot(int arr[], int n)
{
      int s = 0;
      int e = n-1;
      int mid = s+(e-s)/2;

      while(s<e)
      {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
      }
      return s;
}

int main()
{
    int arr[] = { 7, 9, 1, 2, 3};
    
    cout<<"hello everyone. I'm going to find a pivot element in an array." <<endl;
    //cout<<"Pivot is "<< getPivot(arr, 5) <<endl;
    vector<int> v1;
    for(int i = 0; i < 5; i++){
        v1.push_back(arr[i]);
    }
    int p = getPivot(arr, 5);
    vector<int> v(v1.begin() + p, v.end());
    for(int i = 0; i < p; i++){
        v.push_back(v1[i]);
    }
    if(v1 == v) cout<<"True";
    cout<< "False";
    return 0;
}
