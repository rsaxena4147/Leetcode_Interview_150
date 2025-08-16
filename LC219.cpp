#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }
        int val = INT_MAX;

        for (auto n : freq) {
            if (n.second > 1) {
                val = n.first;

              
                vector<int> ind;

                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == val) {
                        ind.push_back(i);
                    }
                }

                for (int i = 0; i < ind.size() - 1; i++) {

                    if (abs(ind[i] - ind[i + 1]) <= k) {
                        return 1;
                    }
                }
            }
        }
          if (val == INT_MAX)
                    return 0;

        return 0;
    }
};