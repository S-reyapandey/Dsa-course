#include <iostream>
#include <unordered_map>
using namespace std;

bool check(string s, string t){
    if(s.length() != t.length()) return false;
    unordered_map <char, int> mp;
    for(auto x : s){
        mp[x]++;
    }
    for(auto x : t){
        if(mp[x] == 0) return false;
        mp[x]--;
    }
    return true;
}

int main() {

    string s, t;
    cin >> s >> t;
    if(check(s, t)) cout << "true";
    else cout << "false";

    return 0;
}
