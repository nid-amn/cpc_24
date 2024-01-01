#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    vector<long long int> productExceptSelf1(vector<long long int>& nums, int n) {
        
        vector<long long int>prod(n,1);
        vector<long long int>left(n,1);
        vector<long long int>right(n,1);
        long long int temp=1;
        for(long long int i=0;i<n;i++){
            left[i]=temp;
            temp*=nums[i];
        }
        temp=1;
        for(long long int i=n-1;i>=0;i--){
            right[i]=temp;
            temp*=nums[i];
        }
        for(int i=0;i<n;i++){
            prod[i]=left[i]*right[i];
        }
        return prod;
        
        
    }
    vector<long long int> productExceptSelf2(vector<long long int>& nums, int n) {
       
        //code here  
        if(n==1) return {1};
        vector<long long int> prod(n,1);
        long long int temp=1;
        
        for(int i=0;i<n;i++){
            prod[i]=temp;
            temp*=nums[i];
        }
        temp=1;
        for(int i=n-1;i>=0;i--){
            prod[i]=prod[i]*temp;
            temp*=nums[i];
        }
        return prod;
    }
};
int main(){
   return 0;
}