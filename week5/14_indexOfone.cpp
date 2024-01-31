/*Find the index of first 1 in an infinite sorted array of 0s and 1s*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int indexOfFirstOne(int arr[], int low, int high)
{
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == 1 && 
            (mid == 0 || arr[mid - 1] == 0))
            break;
        else if (arr[mid] == 1)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return mid;
}

int posOfFirstOne(int arr[])
{
    int l = 0, h = 1;
    while (arr[h] == 0) {
        l = h;
        h = 2 * h;
    }
    return indexOfFirstOne(arr, l, h);
}
};
int main(){
   return 0;
}