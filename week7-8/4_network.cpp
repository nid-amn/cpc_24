#include<bits/stdc++.h>
using namespace std;
 
class Solution {
    void dfs(vector<int> adj[], vector<bool> &visited, int src)
    {
        visited[src] = true;
        for(int i : adj[src]){
            if(!visited[i]){
                dfs(adj, visited, i);
            }
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& arr) {
        int len = arr.size();
        if(len<n-1) return -1;
        vector<int> adj[n];
        for(auto v : arr)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        vector<bool> visited(n, false);
        int ans = 0;
        for(int i=0; i<n; i++)
        if(!visited[i])
        {
            dfs(adj, visited, i);
            ans++;
        }
        return ans - 1;
    }
};

int main(){
   return 0;
}

class solution {
public:
    #define mxNode 100001
    int parent[mxNode];
    void initializeParent(int n){
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findParent(int node){
        if(parent[node]==node) return node;
        return parent[node]=findParent(parent[node]);
    }

    void unionSet(int u,int v){
        u=findParent(u);
        v=findParent(v);
        if(u!=v){
            parent[v]=u;
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        int len=connections.size();
        int redundant=0,component=n;
        initializeParent(n);
        for(int i=0;i<len;i++){
            if(findParent(connections[i][0])==findParent(connections[i][1])){
                redundant++;
            }else{
                unionSet(connections[i][0],connections[i][1]);
                component--;
            }
        }
        if((component-1)>redundant) return -1;
        else return component-1;
    }
};