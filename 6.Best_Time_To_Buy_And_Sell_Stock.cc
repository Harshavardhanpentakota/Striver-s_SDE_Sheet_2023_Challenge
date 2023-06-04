#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    int min=prices[0],overallprofit=0,profit=0;
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i]<min)
          min=prices[i];
        profit=prices[i]-min;
        if(overallprofit<profit)
          overallprofit=profit;
    }
    return overallprofit;
}