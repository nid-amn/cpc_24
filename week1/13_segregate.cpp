#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void segregateEvenOdd(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
        vector<int>v;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)
                v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0)
                v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
	}
};