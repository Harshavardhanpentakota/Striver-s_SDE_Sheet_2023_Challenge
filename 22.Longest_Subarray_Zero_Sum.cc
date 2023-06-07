#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {
    int res=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++)
    {
      sum+=arr[i];
      if(sum==0)
        res=i+1;
      else
      {
        if(mp.find(sum)!=mp.end())
          res=max(res,i-mp[sum]);
        else 
          mp[sum]=i;
      }
    }
    return res;
}