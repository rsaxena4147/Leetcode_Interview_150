#include <bits/stdc++.h>
#include <iostream>
using namespace std;

                class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0 , tank = 0 , start = 0;;

        for(int i = 0 ; i < gas.size() ; i++){
            total += (gas[i] - cost[i]);
            tank += (gas[i]- cost[i]);

            if(tank < 0){
                tank = 0;
                start  = i+1;
            }
        }

        return total >= 0 ? start : -1;
    }
};