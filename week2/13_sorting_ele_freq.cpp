#include<bits/stdc++.h>
using namespace std;
//to sort a map by key or value=> convert to vector 
 
class Solution{
    public:
    static bool compare(pair<int,int> a,pair<int,int> b){
        if(a.second!=b.second){
            return a.second>b.second;
        }
        return a.first<b.first;
        
    }
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>p(mp.begin(),mp.end());
        sort(p.begin(),p.end(),compare);
        vector<int>ans;
        for(auto i:p){
            while(i.second>0){
                ans.push_back(i.first);
                i.second--;
            }
        }
        return ans;
        
        
    }
};
int main(){
   return 0;
}