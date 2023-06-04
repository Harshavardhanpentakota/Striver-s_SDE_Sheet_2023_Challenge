#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int l=0,h=n-1;
   int i=0;
   while(i<=h)
   {
      if(arr[i]==0){
         swap(arr[l],arr[i]);
         l++;
         i++;
      }
      else if(arr[i]==2)
      {
         swap(arr[i],arr[h]);
         h--;
      }
      else
       i++;
   }
}