#include<bits/stdc++.h>
using namespace std;
 
class Solution1 {
 public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    vector<int> path;
    sort(nums.begin(),nums.end());
    nSum(nums, 4, target, 0, nums.size() - 1, path, ans);
    return ans;
  }

 private:
  // Finds n numbers that add up to the target in [l, r].
  void nSum(const vector<int>& nums, long n, long target, int l, int r,
            vector<int>& path, vector<vector<int>>& ans) {
    if (r - l + 1 < n || target < nums[l] * n || target > nums[r] * n)
      return;
    if (n == 2) {
      // Similar to the sub procedure in 15. 3Sum
      while (l < r) {
        const int sum = nums[l] + nums[r];
        if (sum == target) {
          path.push_back(nums[l]);
          path.push_back(nums[r]);
          ans.push_back(path);
          path.pop_back();
          path.pop_back();
          ++l;
          --r;
          while (l < r && nums[l] == nums[l - 1])
            ++l;
          while (l < r && nums[r] == nums[r + 1])
            --r;
        } else if (sum < target) {
          ++l;
        } else {
          --r;
        }
      }
      return;
    }

    for (int i = l; i <= r; ++i) {
      if (i > l && nums[i] == nums[i - 1])
        continue;
      path.push_back(nums[i]);
      nSum(nums, n - 1, target - nums[i], i + 1, r, path, ans);
      path.pop_back();
    }
  }
};

class Solution2 {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};
int main(){
   return 0;
}