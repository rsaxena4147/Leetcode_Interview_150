#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
        return 1;
        if(nums[0]==0)
        return 0;


        int maxInd = 0;

        for(int i = 0 ; i < nums.size() - 1 && i <= maxInd ; i++ ){
            if(maxInd < (i+nums[i])){
                maxInd = (i+nums[i]);
            }
        }
        return nums.size()-1 <= maxInd;
    }
};