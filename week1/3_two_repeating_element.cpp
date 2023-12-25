#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    pair<int, int> findRepeatingElements(const std::vector<int>& arr) {
    unordered_map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
        
        if (frequencyMap[num] > 1) {
            return {num, frequencyMap[num]};
        }
    }

    return {-1, -1};
}
};


