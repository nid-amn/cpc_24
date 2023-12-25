#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int findSum(int A[], int N)
    {
    	//code here.
    	sort(A,A+N);
    	return A[0]+A[N-1];
    }

};