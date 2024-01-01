#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;

        int l=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            l=i+1;
            int r=nums.size()-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                   
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    auto it=find(v.begin(),v.end(),temp);
                    if(it==v.end()){
                        v.push_back(temp);

                    }
                    l++;r--;
                }
                else if(nums[i]+nums[l]+nums[r]<0)
                    l++;
                else r--;
            }
        }
        return v;
        
    }
};
int main(){
   return 0;
}