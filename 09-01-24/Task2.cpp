//Q link: https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
// Q name: Fractional Knapsack
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution {
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n) {
        vector<pair<double, pair<double, double>>> a;//We will store the ratio of weight by value in the first element of the pair
        for (int i = 0; i < n; i++) {
            a.push_back({(double)arr[i].value / (double)arr[i].weight, {arr[i].value, arr[i].weight}});
        }
        sort(a.begin(), a.end());//By sorting pairs with higher ratio of weight and value will go at last
        int i = n - 1;//pointer at the end of vector
        double ans = 0;
        while (W && i >= 0) {
            if (W >= a[i].second.second) {
                ans += a[i].second.first;//adding value to answer
                W -= a[i].second.second;//substracting weight from W
            } else {
                ans += (W / a[i].second.second) * a[i].second.first;
                W = 0;
            }
            i--;
        }
        return ans;
    }
};
//TC - O(nlogn)
//SC - O(n);
        


