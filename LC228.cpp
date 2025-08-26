#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        

        vector<string> ans;
        int ind;

        for (int i = 0; i < nums.size(); i = ind) {
            string st = "";
            st += to_string(nums[i]);
            st += "->";
            int val = nums[i];
            ind = i + 1;

            while (ind < nums.size() && nums[ind] == val + 1 ) {
                val = nums[ind];
                ind++;
            }
            string a = to_string(nums[ind - 1] );

            if (st == a + "->") {
                
                ans.push_back(a);
            } else {
                st += a;
                ans.push_back(st);
            }
        }
        return ans;
    }
};