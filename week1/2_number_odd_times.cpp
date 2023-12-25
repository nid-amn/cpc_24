#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> repeatingEven(int arr[], int n) {
        // code here
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(auto i:mp){
            if(i.second%2==0){
                ans.push_back(i.first);
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
    }
    int getSingle(int arr[], int n) {
	    // code here
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    
	    for(auto i:mp){
	        if(i.second%2!=0){
	            return i.first;
	        }
	    }
	    return 0;
	}
    void countOddEven(int arr[], int sizeof_array)
    {
        
        // your code here
        int even=0,odd=0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        cout<<odd<<" "<<even<<endl;
        
    }
    string oddEven(string S) {
        // code here
        int x=0,y=0;
        map<char,int>mp;
        for(int i=0;i<S.size();i++){
            mp[S[i]]++;
        }
        for(auto i:mp){
            if(int(i.first)%2==0 && i.second%2==0){
                y++;
            }
            else if(int(i.first)%2!=0 && i.second%2!=0){
                y++;
            }
        }
        string res;
        res=y%2==0?"EVEN":"ODD";
        return res;
    }
};

