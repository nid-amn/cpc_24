/* Find First and Last Position of Element in Sorted Array*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>pos={-1,-1};
        int l=0,r=nums.size();
        //if(l==r)return pos;
        pos[0]=first(nums,l,r-1,target,r);
        pos[1]=last(nums,l,r-1,target,r);
        return pos;
    }
    int first(vector<int>arr, int low, int high, int x, int n)
    {
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
                return mid;
            else if (x > arr[mid])
                return first(arr, (mid + 1), high, x, n);
            else
                return first(arr, low, (mid - 1), x, n);
        }
        return -1;
    }

    int last(vector<int>arr, int low, int high, int x, int n)
    {
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if ((mid == n - 1 || x < arr[mid + 1])
                && arr[mid] == x)
                return mid;
            else if (x < arr[mid])
                return last(arr, low, (mid - 1), x, n);
            else
                return last(arr, (mid + 1), high, x, n);
        }
        return -1;
    }
    
};
int main(){
   return 0;
}