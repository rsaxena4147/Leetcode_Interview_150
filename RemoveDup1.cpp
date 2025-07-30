#include<iostream>
#include<bits/stdc++.h>


using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int k = 0;
        int i = 1;
        while(i < nums.size()){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
                i++;
                
            }else{
                i++;

            }
        }
        return k+1;
    }
};
