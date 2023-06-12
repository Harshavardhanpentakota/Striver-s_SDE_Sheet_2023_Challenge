#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
  int length = 0;
  for (int i = 0; i < n - 1; i++)
{
	if(arr[i+1]!=arr[i])
	 length++;
}
return ++length;
}