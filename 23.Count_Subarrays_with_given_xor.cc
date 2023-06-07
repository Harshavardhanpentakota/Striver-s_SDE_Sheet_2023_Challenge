#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
   unordered_map<int,vector<int>>ans;
   int res=0;
   int temp=0;
   int counter=0;
   for(int i=0;i<arr.size();i++)
   {
       res=res^arr[i];
       if(res==x)
         counter++;
       temp=res^x;
       if(ans.find(temp)!=ans.end())
         counter+=ans[temp].size();
       ans[res].push_back(i);
   }
   return counter;
}