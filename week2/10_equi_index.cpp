#include<bits/stdc++.h>
using namespace std;
/*The equilibrium index of an array is an index such that the sum of elements at
 lower indexes is equal to the sum of elements at higher indexes.  */
class Solution{
    public:
    //O(n) one-indexed
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int left = 0,pivot =0,right=0;
        for(int i=1;i<n;i++){
            right+=a[i];
        }
        while(pivot<n-1 && left!=right){
            pivot++;
            right-=a[pivot];
            left+=a[pivot-1];
        }
        return left==right?pivot+1:-1;
    }
};
int main(){
   return 0;
}