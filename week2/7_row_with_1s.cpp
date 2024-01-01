#include<bits/stdc++.h>
using namespace std;

//row not sorted O(m+n)

class Solution{
    public:
    int minRow(int N, int M, vector<vector<int>> A) {
        int m = M, index;
        for(int i=0; i<N; i++) {
            int count = 0;
            for(int j=0; j<M; j++) {
                if(A[i][j] == 1)
                    ++count;
            }
            if(count < m) {
                m = count;
                index = i+1;
            }
        }
        return index;
    }
};
int main(){
   return 0;
}