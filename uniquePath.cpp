#include <iostream>
#include <vector>
using namespace std;

int cntPath(vector<vector<int>> &arr, int row, int col, vector<vector<int>> dp){
    if(row >= 0 && col >= 0 && arr[row][col] == 1) return 0;
    if(row == 0 && col == 0) return 1;
    if(row < 0 || col < 0) return 0;
    if(dp[row][col] != -1) return dp[row][col];
    int up = cntPath(arr, row-1, col, dp);
    int left = cntPath(arr, row, col-1, dp);
    return dp[row][col] = up + left;
}


int main() {
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    // vector<vector<int>> dp(n, vector<int>(m, -1));
    // int path = cntPath(arr, n-1, m-1, dp);
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 1) dp[i][j] = 0;
            else if(i == 0 && j == 0) dp[i][j] = 1;
            else {
                int up = 0, down = 0;
                if(i > 0) up = dp[i-1][j];
                if(j > 0) down = dp[i][j-1];
                dp[i][j] = up + down;
            }
        }
    }

    cout << dp[n-1][m-1];

    return 0;
}