#include<bits/stdc++.h>
using namespace std;

class Solution{
    vector<int> repeatedNumber(const vector<int> &A) {
        vector<int>ans;
        unordered_map<int, bool> numberMap;
        
        for(int i : A) 
        {
            if (numberMap.find(i) == 
                numberMap.end())
            {
                numberMap[i] = true;
            }
            else
            {
                ans.push_back(i);
                break;
            }
        }
        cout << endl;
        
        for(int i = 1; i <= A.size(); i++)
        {
            if (numberMap.find(i) == 
                numberMap.end()) 
            {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }   
};
