#include <bits/stdc++.h>
using namespace std; 

int findDuplicate(vector<int> &arr, int n) {
     unordered_map<int,int>up;
     for(auto x:arr)
     {
        if(up.find(x)!=up.end())
           return x;
        up[x]++;
     }
}
