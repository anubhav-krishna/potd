#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    int ans=0;
    string h="codeforces";
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
     if(s[i]!=h[i])ans++;//checking if the elements on the same index of both the strings are same or not
    }
    cout<<ans<<"\n";
    }
    return 0;
}
//TC = O(n)
//SC = O(n)