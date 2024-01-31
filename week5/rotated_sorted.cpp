/* Find Minimum in Rotated Sorted Array*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int ans=BinarySearch(nums,l,r);
        return ans;
    }
    
    int BinarySearch(vector<int>nums,int l,int r){
        if(r<l)return nums[0];
        if(l==r)return nums[l];
        int mid=l+(r-l)/2;
        
        if (mid < r && nums[mid + 1] < nums[mid])
            return nums[mid + 1];
 
        if (mid > l && nums[mid] < nums[mid - 1])
            return nums[mid];
 
       if (nums[r] > nums[mid])
            return BinarySearch(nums, l, mid - 1);
        return BinarySearch(nums, mid + 1, r);
    }
};
int main(){
   return 0;
}