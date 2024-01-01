#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        if(n==0)return false;
        int smallest=matrix[0][0], largest=matrix[n-1][m-1];
        if(x<smallest || x>largest) return false;
        int i=0,j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==x){
                return true;
            }
            else if(matrix[i][j]>x){
                j--;
            }
            else{
                i++;
            }
            
        }
        return false;
    }
};
int main(){
   return 0;
}