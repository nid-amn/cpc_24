/*Bitonic Point
Given an array arr of n elements that is first strictly increasing and then 
maybe strictly decreasing, find the maximum element in the array.
Note: If the array is increasing then just print the last element will be the maximum value.*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    return *max_element(arr,arr+n);
	}
};
int main(){
   return 0;
}