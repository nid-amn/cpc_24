#include<bits/stdc++.h>
using namespace std;

int guess(int num);
class Solution {
public:
    int guessNumber(int n) {
        int i=0,j=n,mid;
        while(i<=j){
            mid=i+(j-i)/2;
            int res=guess(mid);
            if(res==0){
                return mid;
            }
            if(res==-1){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return -1;
    }
};
int main(){
   return 0;
}