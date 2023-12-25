#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }
        
        vector<int> ans(s.begin(),s.end());
        return ans;
        
    }

    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        
        int count=0;
        for(int i=0;i<m;i++){
            if(s.find(b[i])!=s.end()){
                count++;
            }
        }
        return count;
    }
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int i=0,j=0;
        sort(a,a+n);
        sort(b,b+m);
        int count=0;
        int last=INT_MIN;
        
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(a[i]!=last){
                    count++;
                    last=a[i];
                }
                i++;
                j++;
            }
            
            else if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
            }
            
            
        }
        return count;
    }
};

