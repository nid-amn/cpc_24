#include<bits/stdc++.h>
using namespace std;
/*
547. Number of Provinces
Create an integer variable n which stores the number of cities.
Create a visit array of length n to keep track of nodes that have been visited.
Create an integer numberOfComponents which stores the number of connected components in the graph. Initialize it to 0.
Iterate through all of the nodes, and for each node i check if it has been visited or not. If node i is not visited, we increment numberOfComponents by 1 and start a DFS traversal:
    We use the dfs function to perform the traversal. For each call, pass node, isConnected, and visit as the parameters. We start with node i.
    We mark node as visited.
    We iterate over all the values in isConnected[node] to get the neighbors of node. If isConnected[node][i] == 1, one neighbor of node is i (as we have a direct edge between node and i). For each neighbor i that has not yet been visited, we recursively call dfs with i as the node.
Return numberOfComponents.
*/
class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<bool>& visit) {
        visit[node] = true;
        for (int i = 0; i < isConnected.size(); i++) {
            if (isConnected[node][i] && !visit[i]) {
                dfs(i, isConnected, visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>vis(n,false);
        int count=0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,isConnected,vis);
            }
        }
        return count;
    }
};
int main(){
   return 0;
}

