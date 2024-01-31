/*Increasing Sub Sequence*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int maxLength(string S)
    {
        // code here
        int ans=0;
        int n=S.size();
        vector<int>length(n,0);
        for(int i=0;i<n;i++){
            length[i]=1;
            for(int j=0;j<i;j++){
                if(S[j]<S[i]){
                    length[i]=max(length[i],length[j]+1);
                }
                
            }
            ans=max(ans,length[i]);
        }
        return ans;
    }

    int lengthOfsub(vector<int> & nums){ //O(nlogn)
        int n=nums.size();
        vector<int>ans;
        ans.push_back(ans[0]);

        for(int i=1;i<n;i++){
            if(nums[i]>ans.back()){
                ans.push_back(nums[i]);
            }
            else{
                int low=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[low]=nums[i];

            }
        }
        return ans.size();
    }
    
};
int main(){
   return 0;
}