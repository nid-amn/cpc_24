#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int size)  
    {
        // code here
        vector<long long int> v;
        int xor2 = arr[0]; 
        int set_bit_no;
        int i; 
        int n = size - 2; 
        int x = 0, y = 0; 
         
        for(i = 1; i < size; i++) 
            xor2 = xor2 ^ arr[i]; 

        set_bit_no = xor2 & ~(xor2-1); 

        for(i = 0; i < size; i++) 
        { 
            if(arr[i] & set_bit_no) 
            x = x ^ arr[i]; 
            
            else
            y = y ^ arr[i]; 
        } 
     
        v.push_back(x);
        v.push_back(y);
        return v;
    }
};
