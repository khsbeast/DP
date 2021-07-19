// top down dp
#include<bits/stdc++.h>
using namespace std;
int minsteps(int n,int dp[])
{
  if(n==1)
    return 0;
  if(dp[n])
    return dp[n];
  int a = minsteps(n-1,dp);
  int c;
  int b = c = INT_MAX;
  if(n%2==0)
  b = minsteps(n/2,dp);
  if(n%3==0)
  c = minsteps(n/3,dp);
return dp[n]=1+min(a,min(b,c));
}
int main()
{
  int n;
  cin >> n;
  int dp[n+1] = {0};
  minsteps(n,dp);
  cout << dp[n];
}