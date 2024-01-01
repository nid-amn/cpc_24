#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:

    int threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    bool flag=false;
    int ans;
    for(int i=0;i<A.size();i++){
        int l=i+1;
        int r=A.size()-1;
        if(flag)break;
        while(l<r){
            int sum=A[i]+A[l]+A[r];
            if(sum==B){
                ans=sum;
                flag=true;
                break;
            }
            if(abs(sum-B)<abs(ans-B)){
                ans=sum;
            }
            if(sum<B){
                l++;
            }
            else r--;
        }
    }
    return ans;
}
};
int main(){
   return 0;
}