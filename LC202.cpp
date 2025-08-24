#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int sum(int n){
      int ans = 0;

      while(n){
        ans+=pow(n%10,2);
        n/=10;
      }
      return ans;
    }
    bool isHappy(int n) {
        unordered_map<int,bool> vis;
        

        while(n){
            if(n==1) return 1;
            if(vis[n] == 1) return 0;
            vis[n]=1;      
            n = sum(n);
        }
        return 0;
    }
};