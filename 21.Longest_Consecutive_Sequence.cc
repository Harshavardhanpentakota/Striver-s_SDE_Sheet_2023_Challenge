#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>st;
    for(int i=0;i<n;i++)
      st.insert(arr[i]);
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(st.find(arr[i]-1)!=st.end())
          continue;
        else
        {
            int count=0;
            int current=arr[i];
            while(st.find(current)!=st.end())
            {
                count++;
                current++;
            }
            res=max(res,count);
        }
    }
    return res;
}