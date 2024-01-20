#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int id;
    Solution(){
        id=-1;
        cout<<"construction"<<id<<endl;
    }
    ~Solution(){
        cout<<"destruction"<<"\n";
    }
};
int main(){

   Solution s;
   for(int i=0;i<2;i++){
        Solution s2;
   }
    return 0;
}