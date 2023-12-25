#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void rearrange(int arr[], int n) {
	    // code here
	    vector<int>pos;
	    vector<int>neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }
	        else
	            pos.push_back(arr[i]);
	    }
	    int i=0,j=0,k=0;
	    while(i<n && j<pos.size() && k<neg.size()){
	        arr[i]=pos[j];
	        i++;
	        j++;
	        arr[i]=neg[k];
	        k++;
	        i++;
	    }
	    while(j<pos.size()){
	        arr[i]=pos[j];
	        i++;j++;
	    }
	    while(k<neg.size()){
	        arr[i]=neg[k];
	        i++;
	        k++;
	    }
	}
};