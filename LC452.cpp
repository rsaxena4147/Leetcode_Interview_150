#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        int arrow = 1;
        int s = points[0][0];
        int e = points[0][1];

        for(int i = 1 ; i < points.size() ; i++){

            if(points[i][0] > e){
                arrow += 1;
                s = points[i][0];
                e = points[i][1];
            }else{
                s = points[i][0];
                e = min(e, points[i][1]);
            }
            
        }
       return arrow; 
    }
};