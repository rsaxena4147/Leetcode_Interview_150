#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        string ans = "";
        string st;
        stack<string> stack;

        for (int i = 0; i < path.size(); i++) {

            if (path[i] == '/')
                continue;

            st = "";

            while (i < path.size() && path[i] != '/') {
                st += path[i++];
            }

            if (st == "..") {
                if (!stack.empty()) {
                    stack.pop();
                }
            } else if (st == "."){
                continue;
            }
            else {
                stack.push(st);
            }
        }
        if (stack.empty())
            return "/";

        vector<string> temp;
        while (!stack.empty()) {
            temp.push_back(stack.top());
            stack.pop();
        }
        reverse(temp.begin(), temp.end());

        for (string& s : temp) {
            ans += "/" + s;
        }

        return ans;
    }
};