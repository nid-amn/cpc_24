/*Find Smallest Letter Greater Than Target
You are given an array of characters letters that is sorted in non-decreasing order, and a character target. 
There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. 
If such a character does not exist, return the first character in letters.*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int l=0,r=letters.size()-1,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(letters[mid]<=target)l=mid+1;
            else r=mid-1;
        }
        return l==letters.size()?letters[0]:letters[l];

    }
};
int main(){
   return 0;
}