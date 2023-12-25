#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        set<int>ans;
        int len=nums.size()/3;
        int i=0,j=nums.size()==1?nums.size():nums.size()-1;

        while(i<=j){
            mp[nums[i]]++;
            if(mp[nums[i]]>len){
                ans.insert(nums[i]);
                
            }
            if(i>=j)break;
            i++;
            if(i==nums.size())break;
            mp[nums[j]]++;
            if(mp[nums[j]]>len ){
                ans.insert(nums[j]);
            }
            j--;
        }
        vector<int>res (ans.begin(),ans.end());
        return res;
    }
};