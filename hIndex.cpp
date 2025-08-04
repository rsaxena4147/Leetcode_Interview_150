#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin() , citations.end() , greater<int>());


        int h = 0;

        for(int i = 0 ; i < citations.size() ; i++){
            if((i+1)<=citations[i]){
                h=i+1;
            }else
            break;
        }
        
        return h;
    }
};