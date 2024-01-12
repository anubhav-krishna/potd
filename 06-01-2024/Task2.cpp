//Q link- https://leetcode.com/problems/jump-game-ii/
//Q name- Jump game II
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
    int jmp=0;
    int i=nums.size()-1;
    while(i>0){
        int pos;
        for(int j=i-1;j>=0;j--){
            if((nums[j]+j)>=i)pos=j;//checking the longest jump from where we can reach the end
        }
        i=pos;//setting the pointer to the index of longest jump
        jmp++;
    }
      return jmp;
    }
};
//TC= O(n^2)
//SC=O(n)