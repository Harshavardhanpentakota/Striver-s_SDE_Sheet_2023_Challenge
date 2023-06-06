#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int>up;
	for(int i=0;i<n;i++)
	{
		up[arr[i]]++;
		if(up[arr[i]]>floor(n/2))
		  return arr[i];
	}
	return -1;
}