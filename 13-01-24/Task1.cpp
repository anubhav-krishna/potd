//Q no. CF 1672A
#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    int n;
    cin>>n;
    int sum=0;
   for(int i=0;i<n;i++){
    int b;
    cin>>b;
    sum+=b-1;
   }
   if(sum & 1)cout<<"errorgorn"<<endl;
   else cout<<"maomao90"<<endl;
testcase--;
}
    return 0;
}