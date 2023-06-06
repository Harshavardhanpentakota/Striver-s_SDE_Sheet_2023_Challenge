#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int,int>up;
    vector<int>res;
    unordered_set<int>s;
    for(int i=0;i<arr.size();i++)
    {
        up[arr[i]]++;
        if(up[arr[i]]>floor(arr.size()/3))
           s.insert(arr[i]);
    }
    for(auto x:s)
      res.push_back(x);
    return res;
}