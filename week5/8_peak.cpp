/*852. Peak Index in a Mountain Array*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                start=mid;
            }
            else{
                end=mid;
            }

        }
        return -1;

    }
};
int main(){
   return 0;
}