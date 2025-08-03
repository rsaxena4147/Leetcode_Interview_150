#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    int solve(vector<int> & nums , int ind , int jump ,  vector<int>& dp){
        if(ind >= nums.size()-1)
        return 0;

        if(dp[ind]!=-1)
        return dp[ind];

        int count = nums[ind];
        int ans = INT_MAX;
        
        for(int i = 1 ; i <= count ; i++){
            int res = solve(nums , ind + i , jump + 1, dp);

            if(res != INT_MAX){
                ans = min(ans , res+1);
            }
        }
        dp[ind] = ans;


        
        return dp[ind];
    }
    int jump(vector<int>& nums) {

       vector<int>dp(nums.size()+1,-1);
        return solve(nums , 0, 0 , dp);
        
    }
};