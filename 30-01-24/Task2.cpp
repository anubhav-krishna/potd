#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[s]){
                if(nums[s]<=target && nums[mid]>target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(nums[e]>=target && nums[mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
};