#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>>&m)
 {
        if((x >= 0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

void solve(vector<vector<int>>&m, int n, vector<string>&ans, int srcx, int srcy, vector<vector<int>> visited, string path)
    {
        //you have reached x, y here
        //base case 
        if(srcx == n-1 && srcy == n-1)
        {
            ans.push_back(path);
            return ;
        }
        
        visited[srcx][srcy] = 1;
        
        //4 choices we have U, D, L, R
        
        //down
        int newx = srcx + 1;
        int newy = srcy;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('D');
            solve(m,n,ans,newx, newy, visited, path);
            path.pop_back();
        }
        
        //left
        newx = srcx;
        newy = srcy - 1;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('L');
            solve(m,n,ans,newx, newy, visited, path);
            path.pop_back();
        }
        
        //right
        newx = srcx;
        newy = srcy + 1;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('R');
            solve(m,n,ans,newx, newy, visited, path);
            path.pop_back();
        }
        
        //up
        newx = srcx - 1;
        newy = srcy;
        if(isSafe(newx, newy, n, visited, m))
        {
            path.push_back('U');
            solve(m,n,ans,newx, newy, visited, path);
            path.pop_back();
        }
        
        visited[srcx][srcy] == 0;
    }
vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        
        if(m[0][0] == 0)
        {
            return ans;
        }
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        //intialise with 0
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m, n, ans, srcx, srcy, visited, path);
        sort(ans.begin(), ans.end());
        return ans;
    }


int main()
{
    int n;
    cin>>n;
    vector<vector<int>> m;
    vector<int> map;
    int element;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>> element;
            map.push_back(element);
        }
        m.push_back(map);
    }

    cout<<findPath(m, n);

    return 0;
}