#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini_cost = prices[0];
        int profit = INT_MIN;

        for(int i : prices){
            profit = max(profit ,i - mini_cost);
            mini_cost = min(mini_cost , i);
        }
        return profit;
    }
};