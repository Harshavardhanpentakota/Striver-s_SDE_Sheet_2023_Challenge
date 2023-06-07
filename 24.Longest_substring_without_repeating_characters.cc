#include <bits/stdc++.h> 
using namespace std;

int uniqueSubstrings(string input)
{
   vector<int>res(26,0);
   int j=0;
   int maxx=1;
   for(int i=0;i<input.length();i++)
   {
       res[input[i]-'a']++;
       while(res[input[i]-'a']>1)
       {
           res[input[j]-'a']--;
           j++;
       }
       maxx=max(maxx,i-j+1);
   }
   return maxx;
}