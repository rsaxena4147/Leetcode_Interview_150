#include <bits/stdc++.h>
#include <iostream>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string str = "";
        bool flag = 0;

        for(int i = 0 ; i < s.length() ; i++ ){
            if(s[i]!=' ' ){
                str+=s[i];
                 
            }else if(!str.empty()){
                
                ans.push_back(str);
                str = "";
            }
        }

        if(str.length()){
            ans.push_back(str);
            str="";
        }


        for(int i = ans.size()-1 ; i >= 0 ; i--){
            str+=ans[i];
            if(i>0)
            str+=" ";
        }
        return str;
        
    }
};