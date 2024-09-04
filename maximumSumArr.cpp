#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //int maxi = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //         maxi = max(maxi, sum);
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += arr[j];
    //         maxi = max(maxi, sum);
    //     }
    // }

    int maxi = arr[0];
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }    

    cout << maxi ;

    return 0;
}