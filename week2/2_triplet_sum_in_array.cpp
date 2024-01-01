#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int sec=X-A[i];
            int l=i+1;
            int r=n-1;
            
            while(l<r){
                int sum=A[i]+A[l]+A[r];
                if(sum==X)return true;
                else if(sum<X){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return false;
    }

};
int main(){
   return 0;
}