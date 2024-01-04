#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
       int j=0;
       char a=strs[0][0];//initialising a with 1st element to check it common in all strings
       while(a!='\0'){
           for(int i=1;i<strs.size();i++){//to check the common character in all the strings
               if(strs[i][j]=='\0') return ans;//if any string ends,answer will be returned
               else if(strs[i][j]==a) continue;//if its a common prefix,check the next string
               return ans;//if any uncommon found return answer
           }
           ans.push_back(a);//if character a passed the above loop,it means its a common prefix in all the strings;
           j++;//to check next character
           a=strs[0][j];
       }
       return ans;
    }
};
//TC= O(n^2)
//SC= O(1)