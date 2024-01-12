#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
       int n;
       cin>>n;
       int ans=10;
       if(n<100){ans=n%10;}//if number is less than 100,answer is the unit digit
       else{
        while(n){
            int rem=n%10;
            if(rem<ans)ans=rem;//else the least digit in the number is the answer
            n/=10;
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}
//TC= O(number of digits in n)
//SC = O(1)