#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) arr[i] = -1;
    }
    // int len = 0;
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //        sum += arr[j];
    //        if(sum == 0){
    //         len = max(len, j - i + 1);
    //        }
    //     }
    // }
    unordered_map<int, int> mp;
    int len = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == 0) len = i+1;
        if(mp.find(sum) != mp.end()){
            len = max(len, i - mp[sum]);
        }
        else mp[sum] = i;
    }
    cout << len ;

    return 0;
}