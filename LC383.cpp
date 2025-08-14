#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> ran;
        
        unordered_map<char , int> mag;


        for(char ch : magazine){
            mag[ch]++;
        }


        for(char ch : ransomNote){
            if(mag[ch]>0){
                mag[ch]--;
            }

            else
            return false;
        }
        return true;
    }
};