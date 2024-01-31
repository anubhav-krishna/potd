#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        if(nums.size()==1){
            if(nums[0]==target){
            ans.push_back(0);
            }
            return ans;
        }
        sort(nums.begin(),nums.end());
        int s=0;
        int a=0;
        int e=nums.size()-1;
        int mid=s+((e-s)/2);
        while(s<=e){
            if(nums[mid]==target){
                a=mid;
                e=mid-1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+((e-s)/2);
        }
        while(nums[a]==target){
            ans.push_back(a);
            a++;
        }
        return ans;
    }
};