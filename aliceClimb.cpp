#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, int m){
    if(m >= n) return 1;
    int step = n/m;
    int rem = n%m;
    if(rem == 0) return step;
    else{
        return step + 1;
    }
}

int main() {

    int n, m;
    cin >> n >> m;
    int steps = minSteps(n, m);
    cout << steps;

    return 0;
}