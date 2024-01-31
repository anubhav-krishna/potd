#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    long long n;
    cin>>n;
    vector<long long>a(n,0);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long max1=a[0]*a[1];
    long long max2=a[a.size()-1]*a[a.size()-2];
    if(max1>max2)cout<<max1<<endl;
    else cout<<max2<<endl;
testcase--;
}
    return 0;
}