#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i = 0;
        int j = 0;
        int n = nums.size();

        int sum = 0;
        int ans = INT_MAX;

        while(j < n){

            sum+=nums[j];

            if(sum>=target){
                ans = min(ans , j - i + 1);
                sum-=nums[i];
                sum-=nums[j];
                i++;
            }else{
                j++;
            }
            


        }
        return ans == INT_MAX ? 0 : ans;
        
    }
};