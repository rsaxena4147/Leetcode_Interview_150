#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()) return 0;

        unordered_map<char , vector<int>> map1;
        unordered_map<char , vector<int>> map2;

        for(int i = 0 ; i < s.length() ; i++){
            map1[s[i]].push_back(i);
            map2[t[i]].push_back(i);
        }

        for(int i = 0 ; i < s.length() ; i++){
            vector<int> vec1 = map1[s[i]];
            vector<int> vec2 = map2[t[i]];

            if(vec1.size() != vec2.size()) return 0; 

            for(int j = 0 ; j < vec1.size() ; j++){
                if(vec1[j] != vec2[j]) return 0;
            }
        }
        return 1;
    }
};