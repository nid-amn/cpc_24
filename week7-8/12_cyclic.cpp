#include<bits/stdc++.h>
using namespace std;
/*Detect cycle in a directed graph
Using DFS: if present in vis and recursion stack then there exist cycle.

2.Kahn's algorithm : topological sorting*/ 
class Solution{
    public:
    bool CheckCycle(int src,vector<bool>&vis,vector<bool>&recs,vector<int>adj[]){
        vis[src]=true;
        recs[src]=true;
        for(auto nex:adj[src]){
            if(!vis[nex]){
                bool nexans=CheckCycle(nex,vis,recs,adj);
                if(nexans){
                    return true;
                }
            }
            else{
                if(vis[nex] && recs[nex]){
                    return true;
                }
            }
        }
        recs[src]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>vis(V,false);
        vector<bool>recs(V,false);
        
        bool ans=false;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                ans=CheckCycle(i,vis,recs,adj);
                if(ans){
                    break;
                }
            }
        }
        return ans;
        
    }

    int Solve(int A, vector<vector<int> > &B) {
        vector<int>vis(A,0);
        queue<int>q;
        int visited=0;
        map<int,vector<int>>mp;
        
        for(int i=0;i<B.size();i++){
            vis[B[i][1]]++;
            mp[B[i][0]].push_back(B[i][1]);
        }
        
        for(int i=1;i<=A;i++){
            if(vis[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int s=q.front();
            q.pop();
            visited++;
            for( auto v:mp[s]){
                vis[v]--;
                if(vis[v]==0){
                    q.push(v);
                }
            }
            
        }
        return visited!=A;
        
        
    }
    
};


int main(){
   return 0;
}