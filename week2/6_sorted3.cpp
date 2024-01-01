#include<bits/stdc++.h>
using namespace std;
//O(n)
class Solution{
    public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans;
        if(N<3)return ans;
        int min_ele=arr[0];
        int max_ele=INT_MAX;
        int stored_ele;
        
        for(int i=1;i<N;i++){
            if(arr[i]==min_ele){
                continue;
            }
            else if(arr[i]<min_ele){
                min_ele=arr[i];
            }
            else if(arr[i]<max_ele){
                max_ele=arr[i];
                stored_ele=min_ele;
            }
            else if(arr[i]>max_ele){
                ans.push_back(stored_ele);
                ans.push_back(max_ele);
                ans.push_back(arr[i]);
                return ans;
            }
        }
        return ans;
    }
};
int main(){
   return 0;
}