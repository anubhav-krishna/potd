#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.emplace_back(b);
    }
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        string s;
        cin>>s;
        for(int j=0;j<c;j++){
            if(s[j]=='D')a[i]++;
            else{if(a[i]==0)a[i]=9;else a[i]--;}
            a[i]=a[i]%10;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
testcase--;
}
    return 0;
}