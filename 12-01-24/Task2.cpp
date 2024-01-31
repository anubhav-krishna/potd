#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    int n,b;
    cin>>n>>b;
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size();i++){
        if((s[i]-'0')<b && flag==0){
            cout<<b;flag=1;
        }
        cout<<s[i];
    }
    if(flag==0)cout<<b;
    cout<<endl;
testcase--;
}
    return 0;
}