#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        vector<int>ans;
        if(r==0)return ans;

        int dr[]={0,1,0,-1};
        int dc[]={1,0,-1,0};
        int x=0,y=0,di=0;
        
        vector<vector<bool>>seen(r,vector<bool>(c,false));
        
        for(int i=0;i<r*c;i++){
            ans.push_back(matrix[x][y]);
            seen[x][y]=true;
            int newx=dr[di]+x;
            int newy=dc[di]+y;
            
            if(0<=newx && newx<r && 0<=newy && newy<c && !seen[newx][newy]){
                x=newx;
                y=newy;
            }
            else{
                di=(di+1)%4;
                x+=dr[di];
                y+=dc[di];
            }
        }
        return ans;
    }
};
int main(){
   return 0;
}