/*find k closest*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int findCrossOver(vector<int>arr,int l,int r, int x){
        if(arr[r]<=x)return r;
        if(arr[l]>x)return l;
        int mid=l+(r-l)/2;
        if (arr[mid] <= x && arr[mid+1] > x) 
            return mid; 
    
        if(arr[mid] < x) 
            return findCrossOver(arr, mid+1, r, x); 

        return findCrossOver(arr, l, mid - 1, x); 
    } 
        
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=findCrossOver(arr,0,arr.size()-1,x);
        int r=l+1,count=0;
        int n=arr.size();
        vector<int>ans;
        while (l >= 0 && r < n && count < k) 
        { 
            if (x - arr[l] <= arr[r] - x) 
                ans.push_back(arr[l--]);
            else
                ans.push_back(arr[r++]); 
            count++; 
        } 
        while (count < k && l >= 0) 
            ans.push_back(arr[l--]),count++; 
        while (count < k && r < n) 
         ans.push_back(arr[r++]),count++; 
        sort(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
   return 0;
}