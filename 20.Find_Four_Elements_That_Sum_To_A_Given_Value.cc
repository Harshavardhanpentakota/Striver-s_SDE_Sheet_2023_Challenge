#include <bits/stdc++.h>
using namespace std;

string fourSum(vector<int> arr, int target, int n) {
    string y="Yes";
    string x="No";
    unordered_map<long long,pair<int,int>>up;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            long long sum=arr[i]+arr[j];
            if(up.find(target-sum)!=up.end()){
                if(up[target-sum].first!=i && up[target-sum].second!=i && up[target-sum].first!=j && up[target-sum].second!=j)  
                  return y;
            }
            up[sum]={i,j};
        }
    }
    return x;
}
