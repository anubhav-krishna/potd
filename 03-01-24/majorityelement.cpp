#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];//the majority element will always in the middle after sorting
    }
};
//TC= O(nlogn)
//SC= O(1)