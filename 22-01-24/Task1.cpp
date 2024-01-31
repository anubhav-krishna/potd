#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int ans=0;int j=0;
        for(int i=0;i<s.size();i++){
           mp[s[i]]++;
              while(mp[s[i]]>1){
                  mp.erase(s[j]);
                  j++;
              }
               mp[s[i]]++;
          if(i-j+1>ans)ans=i-j+1;
        }
        return ans;
    }
};