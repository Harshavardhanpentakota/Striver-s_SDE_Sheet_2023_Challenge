#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	vector<int>ar(n+1,0);
	int missing,repeating;
	for(auto x:arr)
	  ar[x]++;
    for (int i = 1; i <= n; i++) {
          if (ar[i] == 0)
		    missing=i;
		  if(ar[i]>1)
		    repeating=i;
        }
	return {missing,repeating};
}
