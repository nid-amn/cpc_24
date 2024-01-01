#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0],res=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else{
                res=max(sum,res);
                sum=nums[i];
            }
        }
        res=max(sum,res);
        return res;
    }
};
int main(){
   return 0;
}