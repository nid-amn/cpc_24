#include<bits/stdc++.h>
using namespace std;
 
//Fisher yales shuffle algo: elements equally likely
class Solution{
    public:
    void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
        vector<int>odd,even;
        int i;
	    for(i=0;i<n/2;i++){
	        odd.push_back(arr[i]);
	    }
	    while(i<n){
	        even.push_back(arr[i]);
	        i++;
	    }
	    int j=0;
	    for(int i=0;i<n;i+=2){
	        arr[i]=odd[j];
	        arr[i+1]=even[j];
	        j++;
	    }
	    
	    
	}
};
int main(){

    srand(12);
    for(int i=0;i<6;i++)
    cout<<rand()<<" ";
   return 0;
}