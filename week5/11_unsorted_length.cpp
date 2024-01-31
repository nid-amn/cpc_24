/*Length Unsorted Subarray*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    vector<int> res;
        int start=-1;
        int end=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>0;i--){
            if(arr[i-1]>arr[i]){
                end=i;
                break;
            }
        }
        if(start==-1 && end==-1){
            return {0,0};
        }
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=start;i<=end;i++){
            mn=min(arr[i],mn);
            mx=max(arr[i],mx);
        }
        for(int i=0;i<start;i++){
            if(arr[i]>mn){
                start=i;
                break;
            }
        }
        for(int i=end+1;i<n;i++){
            if(arr[i]<mx){
                end=i;
            }
        }
        return {start,end};
	}
};
int main(){
   return 0;
}