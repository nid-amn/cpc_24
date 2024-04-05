#include<bits/stdc++.h>
using namespace std;

/*733. Flood Fill*/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r=image.size(), c=image[0].size();
        int ex_color=image[sr][sc];

        if (ex_color==color){
            return image;
        }
        dfs(image,sr,sc,color,ex_color);

        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int ex_color){
        if (image[sr][sc] == ex_color){
            image[sr][sc]= color;
            if(sr>=1){
                dfs(image,sr-1,sc,color,ex_color);
            }
            if(sr+1<image.size()){
                dfs(image,sr+1,sc,color,ex_color);
            }
            if(sc>=1){
                dfs(image,sr,sc-1,color,ex_color);
            }
            if(sc < image[0].size()){
                dfs(image,sr,sc+1,color,ex_color);
            }
        }
    }
};
int main(){
   return 0;
}