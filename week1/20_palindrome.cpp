#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long int nums=x;
        long int rev=0,r;
        if(nums<0)return false;
        while(nums!=0){
            r=nums%10;
            nums/=10;
            rev=rev*10+r;
        }
        if(rev==x) return true;
        return false;
    }
};