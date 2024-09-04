#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start < end){
        if(s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    
    string s;
    cin >> s;
    if(check(s)) cout << "true";
    else cout << "false"; 

    return 0;
}