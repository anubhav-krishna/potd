#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;//To store no. of good pairs
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){//j=i+1 so that it only check j>i elements
                 if (nums[i] == nums[j]) ans++;
            }
        }
        return ans;
    }
};
// Time complexity= O(n^2)
// Space complexity= O(1)
