/*Search an element in a sorted and rotated Array*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    /*find the start position*/
    int search(vector<int>&nums, int target) {
        int l =0,r=nums.size()-1;
        
        while(true){
            if(nums[l]<=nums[r]){
                break;
            }
            l++;
        }
        int ans=binarySearch(nums, target,l, r); //from start to end
        if(ans==-1){
            ans=binarySearch(nums, target,0, l-1);//remaining
        }
        return ans;
       
    }
    int binarySearch(vector<int>nums,int target,int left,int right){
        if(right>=left){
            int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            return binarySearch(nums,target,left,mid-1);
        }
        else return binarySearch(nums,target,mid+1,right);
        }
        
        return -1;
    }
};
int main(){
   return 0;
}