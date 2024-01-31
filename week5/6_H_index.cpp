/*Given an array of integers citations where citations[i] is the number of citations a researcher received for their ith paper and citations is sorted in ascending order, 
return the researcher's h-index.*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(citations[mid]<n-mid){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return n-s;
    }
};
int main(){
   return 0;
}