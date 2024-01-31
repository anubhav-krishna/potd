#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
            if(height[i]<height[j]){
                int maxi=height[i]*(j-i);
                if(maxi>ans)ans=maxi;
                i++;
            }
            else{
                int maxi=height[j]*(j-i);
                if(maxi>ans)ans=maxi;
                j--;
            }
        }
        return ans;
    }
};