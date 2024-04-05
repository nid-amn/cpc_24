#include<bits/stdc++.h>
using namespace std;
/*841. Keys and Rooms*/
class Solution{
    public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int no_rooms=rooms.size();
        vector<bool>vis(no_rooms,false);
        stack<int> s;
        vector<bool> seen(no_rooms,false);
        s.push(0);
        seen[0]=true;
        while(!s.empty()){
            int k=s.top();
            s.pop();
            vis[k]=true;
            for(auto i:rooms[k]){
                if(i==k)continue;
                if(vis[i]==false && seen[i]==false){
                    s.push(i);
                    seen[i]=true;
                }
            }
        }
        for(auto chk:vis){
            if(!chk)return false;
        }
        return true;

    }
};
int main(){
   return 0;
}