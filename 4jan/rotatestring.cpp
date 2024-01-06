#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
     if(s.size()!=goal.size())return false;
     for(int i=0;i<s.size();i++){
         if(s==goal)return true;
         goal.push_back(goal[0]);//every time we are roating string and checking if both string is same or not;
         goal.erase(0,1);
     }
       if(s==goal)return true;
       return false;
    }
};
//TC= O(n)
//SC =O(1)