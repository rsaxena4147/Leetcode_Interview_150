#include<iostream>
#include<bits/stdc++.h>


using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int l =0 , r=0;

        while(r < nums.size()){

            int count = 1;

            while( (r+1<nums.size() ) && nums[r]==nums[r+1]){
                r++;
                count++;
            }

            for(int i = 1 ; i <= min(2,count) ; i++){
                nums[l++]= nums[r];
            }
            r++;
        }
        return l;
    }
};