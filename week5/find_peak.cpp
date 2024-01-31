#include<bits/stdc++.h>
using namespace std;
/*Find Peak*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size();
        int ans=BinarySearch(nums,l,r-1);
        return ans;
    }
    int BinarySearch(vector<int>nums,int l,int r){
        if(l<=r){
            int mid=l+(r-l)/2;
            if((mid==0||nums[mid-1]<=nums[mid]) &&(mid==nums.size()-1 || nums[mid]>=nums[mid+1] )){
                return mid;
            }
            else if(mid>0 && nums[mid-1]>nums[mid]){
                return BinarySearch(nums,l,mid-1);
            }
            else {
                return BinarySearch(nums,mid+1,r);
            }
        }
        return 0;
            
    }
};
int main(){
   return 0;
}