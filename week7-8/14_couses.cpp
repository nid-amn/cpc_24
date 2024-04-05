#include<bits/stdc++.h>
using namespace std;
/*207. Course Schedule
*/ 
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int N=numCourses;
        vector<int>adj[N];
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        int inDegree[N];
        for(int i=0;i<N;i++){
            inDegree[i]=0;
        }
        for(int i=0;i<N;i++){
            for(auto it:adj[i]){
                inDegree[it]++; //the number of prerequisite required
            }
        }
        queue<int>q;
        for(int i=0;i<N;i++){
            if(inDegree[i]==0){
                q.push(i);//push in the courses which does not require any prerequisites
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                inDegree[it]--;
                if(inDegree[it]==0){
                    q.push(it);
                }

            }
        }
        if(ans.size()==N)return true;
        return false;
        
    }
};
int main(){
   return 0;
}