#include<bits/stdc++.h>
using namespace std;
//either prefix sum repeats or becomes zero o(n) 
class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        set<int>s;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]==0)return true;
            
            if(s.find(sum)!=s.end() || sum==0) return true;
            s.insert(sum);
        }
        return false;
    }
};
int main(){
   return 0;
}