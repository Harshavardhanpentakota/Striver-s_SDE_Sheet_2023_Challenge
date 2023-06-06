#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
       int l=0,h=mat.size()-1;
       while(l<h)
       {
           int mid=l+(h-l)/2;
           if(mat[mid][0]>target)
             h=mid-1;
           else if(mat[mid][0]<target)
             l=mid+1;
           else if(mat[mid][0]==target) 
             return 1;
       }
       if(mat[l][0]>target)   //test case 1
         l--;
       int low=0,high=mat[l].size()-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           if(mat[l][mid]>target)
             high=mid-1;
           else if(mat[l][mid]<target)
             low=mid+1;
           else if(mat[l][mid]==target)
             return 1;
       }
       
       return 0;
        
}