#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int ans;
        for(auto i:nums){
            if(mp[i]==1){
                ans=i;
                break;
            }
            mp[i]++;
        }
        return ans;
        
    }

};