#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    next_permutation(permutation.begin(),permutation.end());
    return permutation;
}
