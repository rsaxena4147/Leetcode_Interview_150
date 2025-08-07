#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       

        int ind = -1;

        if(strs.size()==1 || strs[0]==""){
            return strs[0];
        }

        for(int i = 0 ; i < strs[0].size() ; i++){

            for(int j = 1; j < strs.size() ; j++){

                if(strs[0][i] != strs[j][i]){
                ind = i;
              
                break;
                }


            }
            if(ind != -1){
                break;
            }
            
        }

        

        return ind == -1 ? strs[0] : strs[0].substr(0, ind);
    }
};