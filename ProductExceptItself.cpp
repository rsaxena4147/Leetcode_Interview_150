#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n,1);
        vector<int> s(n,1);
        vector<int> ans(n,1);

        for(int i = 1 ; i < n ; i++){
            p[i] = p[i-1]*nums[i-1];
        }
        for(int i = n - 2 ; i >= 0 ; i--){
            s[i] = s[i+1]*nums[i+1];
        }
        for(int i = 0; i < n ; i++){
            ans[i]=s[i]*p[i];
        }

        return ans;
    }
};