// Q no. 1758 B
#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    int n;
    cin>>n;
    
    if(n%2==1){
        for(int i=0;i<n;i++){
            cout<<"1"<<" ";//For odd number,all 1 is one of the answer
        }
    }
    else{
         cout<<"1"<<" ";
         cout<<"3"<<" ";
          for(int i=0;i<n-2;i++){
             cout<<"2"<<" ";//For all even numbers,one 1,one3 and rest 2 is one of the answer
          }
    }
    
    cout<<endl;
testcase--;
}
    return 0;
}