#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string word="";
        string ans="";
        
        for(auto i:S){
            if(i=='.'){
                ans=word+ans;
                ans=i+ans;
                word="";
            }
            else{
                word+=i;
            }
        }
        ans=word+ans;
        return ans;
    } 
};