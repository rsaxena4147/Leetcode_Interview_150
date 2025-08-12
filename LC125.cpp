#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      string org = "";

      for(char ch : s){
        if(ch >= 65 && ch <= 90){
            char c = ch + 32;
            org+=c;
        }else if(ch >= 97 && ch <= 122  || ch >='0' && ch<='9'){
            org+=ch;
        }
      }
      string rev = org;
      reverse(rev.begin() , rev.end());
      return org == rev;
    }
};