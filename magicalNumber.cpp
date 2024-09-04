#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string generate(int num){
    if(num == 0) return "0";
    string binary = "";
    while(num > 0){
        binary = (num%2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }
    return binary;
}

bool check(int num){
    string binary = generate(num);
    int sum = 0;
    for(char c : binary){
        sum += (c == '0') ? '1' : '2';
    }
    return sum%2 == 1;
}

int main() {

    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
      if(check(i) == true) cnt++;
    }
    cout << cnt;
    return 0;
}