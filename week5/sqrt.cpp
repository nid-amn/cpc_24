#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int mySqrt(int x) {
        if(x==0,x==1){
            return x;
        }
        long long int root=1,i=1;
        while(root<=x){
            i++;
            root=i*i;
        }
        return i-1;
    }
};
int main(){
   return 0;
}