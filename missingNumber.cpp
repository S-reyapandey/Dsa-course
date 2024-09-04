#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int totalSum = n*(n+1)/2;
    for(int x : arr){
        totalSum -= x;
    }
    cout << totalSum;
   
    return 0;
}