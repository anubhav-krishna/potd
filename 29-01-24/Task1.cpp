//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int firstoc=0;
	    int lastoc=0;
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        if(arr[mid]==x){
	            firstoc=mid;
	            e=mid-1;
	        }
	        else if(arr[mid]>x){
	            e=mid-1;
	        }
	        else s=mid+1;
	    }
	    s=0;
	    e=n-1;
	     while(s<=e){
	        int mid=s+(e-s)/2;
	        if(arr[mid]==x){
	            lastoc=mid+1;
	            s=mid+1;
	        }
	        else if(arr[mid]>x){
	            e=mid-1;
	        }
	        else s=mid+1;
	    }
	    return lastoc-firstoc;
	    }
};
