#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0 ;
        int j = 0 ;
        int ind = -1;

        while(i < s.length() && j < t.length()){
            if(s[i]==t[j]){
                if(ind < j){
                    ind = j;
                    i++;
                    j++;
                }
            }else{
                j++;
            }
        }
        return i == s.length();
    }
};