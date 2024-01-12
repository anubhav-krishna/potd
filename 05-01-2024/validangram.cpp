#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        return false;
        // after sorting if both the string are same,these are valid angrams;
        // TC= O(nlogn)
        // SC= O(1)
    }
};