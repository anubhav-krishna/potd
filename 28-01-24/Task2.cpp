#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
                ans=s;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(ans==-1)ans=0;
        return ans;
    }
};