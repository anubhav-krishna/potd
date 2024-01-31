//Q no. 978B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    int n;
    cin>>n;
  cin>>s;
    int check=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='x')check++;
        else check=0;
        if(check>2)ans++;
    }
    cout<<ans<<endl;
    return 0;
}