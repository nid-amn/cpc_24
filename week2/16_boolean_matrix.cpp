#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int rows=matrix.size(),cols=matrix[0].size();
        
        int r[rows],c[cols];
        for(int i=0;i<rows;i++){
            r[i]=0;
        }
        for(int j=0;j<cols;j++){
            c[j]=0;
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==1){
                    r[i]=1;
                    c[j]=1;
                }  
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(r[i]==1||c[j]==1){
                    matrix[i][j]=1;
                }
            }
        }
        
    }
};
int main(){
   return 0;
}