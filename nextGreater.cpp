#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main () {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    vector<int> ans(n, -1);
    stack<int> st;
    for(int i = n-1; i >= 0; i--){
       while(!st.empty() && st.top() <= vec[i]) st.pop();
       if(i < n && !st.empty()) ans[i] = st.top();
       st.push(vec[i]);
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}