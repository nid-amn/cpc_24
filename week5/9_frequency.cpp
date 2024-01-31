#include<bits/stdc++.h>
using namespace std;
/*Given a sorted array Arr of size N and a number X, 
you need to find the number of occurrences of X in Arr.
time complexity: O(logn)*/
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int first_Search(int arr[],int n,int x){
		    int l=0,r=n,mid;
		    if(x>arr[n-1] || x<arr[0])return -1;
		    while(l<=r){
		        mid=l+(r-l)/2;
		        if(arr[mid]==x && arr[mid-1]!=x){
		            return mid;
		        }
		        else if(arr[mid]<x){
		            l=mid+1;
		        }
		        else{
		            r=mid-1;
		        }
		    }
		    return -1;
		}
		int end_Search(int arr[],int n,int x){
		    int l=0,r=n,mid;
		    if(x>arr[n-1] || x<arr[0])return -1;
		    while(l<=r){
		        mid=l+(r-l)/2;
		        if(arr[mid]==x && arr[mid+1]!=x){
		            return mid;
		        }
		        else if(arr[mid]<x || arr[mid+1]==x){
		            l=mid+1;
		        }
		        else{
		            r=mid-1;
		        }
		    }
		    return -1;
		}
		
	int count(int arr[], int n, int x) {
	    // code here
	    int start=first_Search(arr,n,x);
	    if(start==-1)return 0;
	    int end=end_Search(arr,n,x);
	    if(end==-1)return 0;
	    return end-start+1;
	}
};
int main(){
   return 0;
}