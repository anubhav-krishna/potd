#include<bits/stdc++.h>
using namespace std;
int minMoves(int a[], int n, int k)
{
    int ans=0;//to store no. of operations
    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1])continue;//no operations needed if the number is already equal or small than the previous
        int p=a[i]-a[i-1];//stores difference
        int q=p/k;//counting number of operation to be performed
        if(p%k!=0)q++;//if its still greater than previous,perform operation one more time
        a[i]-=q*k;//actual opeation performed
        ans+=q;//number of operation added in answer
        ans=ans%1000000007;//mod of 10^9+7 as asked in the question
    }
    return ans;
}//TC=O(n)
//SC= O(1)