#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    //condition max of the element closest to zero {-1,1}=1 O(nlongn)
    int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr,arr+n);
            int l=0,r=n-1,min_sum=INT_MAX;
            while(l<r){
                int sum=arr[l]+arr[r];
                if(abs(sum)<=abs(min_sum)){
                    if(abs(sum)==abs(min_sum)){
                        min_sum=max(sum,min_sum);
                    }
                    else
                    min_sum=sum;
                }
                if(sum<0)l++;
                else r--;
            }
            return min_sum;
        }
};
int main(){
   return 0;
}