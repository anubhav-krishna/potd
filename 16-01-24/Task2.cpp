#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int sum=0;
        int max=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        for(int i=0;i<nums.size()/2;i++){
            sum=nums[i]+nums[n];
            n--;
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};