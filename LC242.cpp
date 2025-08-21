#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>mapS;
        unordered_map<char,int>mapR;

        for(int i = 0 ; i < s.length() ; i++){
            mapS[s[i]]++;
            mapR[t[i]]++;
        }

        for(int i = 0 ; i < t.length() ; i++){
           if(mapR[t[i]] != mapS[t[i]]){
            return 0;
           }
        }
        return true;
    }
};