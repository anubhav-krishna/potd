#define ll long long
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
      ll s=1;
      ll e=n;
      ll stair=0;
      while(s<=e){
          ll mid=s+(e-s)/2;
          ll ans=mid*(mid+1)/2;
          if(ans==n)return mid;
          else if(ans<n){
              s=mid+1;
              stair=mid;
          }
          else e=mid-1;
      }
      return stair;
    }
};