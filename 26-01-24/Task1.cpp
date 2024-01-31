#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
       int n= skill.size();
        long long ans=0;
        int skillsum=skill[0]+skill[n-1];
       for(int i=0;i<n/2;i++){
           if(skill[i]+skill[n-1-i]!=skillsum)return -1;
           ans+=skill[i]*skill[n-1-i];
       }
       return ans;
    }
};