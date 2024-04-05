#include<bits/stdc++.h>
using namespace std;
/*463. Island Perimeter
The logic behind this is, if any land was above it there will be 2 edges common, 
similarly for left side.*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        int peri=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    peri+=4;
                    if(i>0 && grid[i-1][j]==1){ //check if there's land above
                        peri-=2;
                    }
                    if(j>0 && grid[i][j-1]==1){ //check if there is land left side
                        peri-=2;
                    }

                }
                   

            }
        }
        return peri;
    }
};
int main(){
   return 0;
}