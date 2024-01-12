#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     string s;
     cin>>s;
    if(s=="cab" || s=="bca"){cout<<"NO"<<"\n";}
    else cout<<"YES"<<"\n";
    }
    return 0;
}
//Used greedy as there is only 6 testcases possible
//TC= O(1)
//SC= O(n)