#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	  for(int j=nums1.size()-1;j>=m;j--)
            nums1.erase(nums1.begin()+j);
        for(int i=0;i<nums2.size();i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
		return nums1;
}