class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	    int max=0;
	    int ans=0;
	   for(int i=0;i<n;i++){
	       if(arr[i]>max)max=arr[i];
	   }
	   for(int i=0;i<n;i++){
	       if(arr[i]<max && arr[i]>ans)ans=arr[i];
	   }
	   if(ans==0) return -1;
	   return ans;
	}
};