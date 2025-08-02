#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class RandomizedSet {
public:
    unordered_map<int, int> map;
    vector<int> vec;
    RandomizedSet() {
        srand(time(0));

    }

    bool insert(int val) {
        if (map.find(val) != map.end()) return false;
        map[val] = vec.size();
        vec.push_back(val);
        

        return 1;
    }

    bool remove(int val) {

        if (map.find(val) == map.end()) return 0;

        int ind = map[val];
        int lastval = vec[vec.size()-1];
        map[lastval]=ind;
        vec[ind]=lastval;
        map.erase(val);
        vec.pop_back();
        return 1;
    }

    int getRandom() {

        int randomIndex = rand() % vec.size();
        int randomKey = vec[randomIndex];
        return randomKey;
    }
};

