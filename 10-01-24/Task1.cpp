//Q 1768B
#include<bits/stdc++.h>
using namespace std;
int main()
{
int testcase;
cin>>testcase;
while(testcase){
    int n;int k;
    cin>>n;cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int check=1;
    for(int i=0;i<n;i++){
        if(check==arr[i])check++;//Check most continous 1 2 3....
    }
    cout<<ceil((n-check+1)/(double)k)<<endl;//The ceil integer of difference f n and check 
    //divided by k is the answer
testcase--;
}
    return 0;
}
//TC = O(n)
//SC =O(n)