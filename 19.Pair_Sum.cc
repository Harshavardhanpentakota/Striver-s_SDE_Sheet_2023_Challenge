#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
  int cnt=0;
  vector<vector<int>>res;
  unordered_map<int,int>up;
  for(auto x:arr)
  {
     if(up.find(s-x)!=up.end())
     {
        int val=up[s-x];
        vector<int>ans;
        while(val--)
        {
           ans.push_back(min(x,s-x));
           ans.push_back(max(x,s-x));
           res.push_back(ans);
        }
     }
     up[x]++;
  }
  sort(res.begin(),res.end());
  return res;
}