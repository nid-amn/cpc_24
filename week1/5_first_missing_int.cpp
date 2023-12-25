#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> num(nums.begin(),nums.end());
        int i=1;
        while(true){
            if(num.find(i)==num.end()){
                return i;
            }
            i++;
        }
        
    }
};