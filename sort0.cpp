#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n; 
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int start = 0, end = 0;
    while(start < n && end < n){
        if(arr[start] != 0) start++;
        else{
            end = start+1;
            while(end < n && arr[end] == 0) end++;
            if(end < n){
               swap(arr[start], arr[end]);
            }
            start++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}