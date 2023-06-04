#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans(n);
  ans[0].push_back(1);
  for(int i = 1;i<n;i++){
    for(int j = 0;j<=i;j++){
      if(j==0 || j==i)ans[i].push_back(1);
      else ans[i].push_back( ans[i-1][j-1] + ans[i-1][j] );
    }
  }
return ans;
}
