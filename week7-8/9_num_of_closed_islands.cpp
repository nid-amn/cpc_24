#include<bits/stdc++.h>
using namespace std;
 
/*1254. Number of Closed Islands
0's -> land
1's -> water
numbers of islands surrounded by water
*/

class Solution {
public:
    vector<vector<bool>> vis;
    vector<pair<int, int>> d = {{0,1},{1,0},{-1,0},{0,-1}};
    int n, m;

    bool valid(int ci, int cj)
    {
        return !(ci<0 || ci>=n || cj<0 || cj>=m);
    }
    void dfs(int si, int sj, vector<vector<int>>& grid)
    {
        vis[si][sj] = true;
        for(int i=0; i<4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 0)
                dfs(ci,cj,grid);
        }
    }

    int closedIsland(vector<vector<int>>& grid) 
    {
        n = grid.size();
        m = grid[0].size();

        vis.resize(n, vector<bool>(m, false));

        //for loop for making vis=true for water and lands connected to the border
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 || j==0 || i==n-1 || j==m-1 || grid[i][j]==1)
                {
                    vis[i][j] = true;
                    if(grid[i][j] == 0)//if land false in the border => not closed thus vis=true
                        dfs(i,j, grid);
                }
            }
        }
        
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && grid[i][j]==0)
                {//if not vis-> not in border and land then count++
                    cnt++;
                    dfs(i,j,grid);
                }
            }
        }

        return cnt;
    }
};
int main(){
   return 0;
}