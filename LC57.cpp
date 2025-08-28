#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        intervals.push_back(newInterval);
        sort(intervals.begin() , intervals.end());

        vector<vector<int>> ans ;

        vector<int> temp = intervals[0];

        for(int i = 1 ; i < intervals.size() ; i++){
            int a = temp[0];
            int b = temp[1];

            if(b >= intervals[i][0]){
                temp[1]=intervals[i][1] > b ? intervals[i][1] : b; 
            }else{
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        if(temp.size()){
            ans.push_back(temp);
        }
        return ans;
    }
};