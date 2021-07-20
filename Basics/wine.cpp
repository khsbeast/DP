// top down dp
#include<bits/stdc++.h>
using namespace std;
int solve(int wine[],int i,int j,int year)
{
  if(i==j)
    return wine[i]*year;

  int start = wine[i]*year + solve(wine,i+1,j,year+1);
  int end = wine[j]*year + solve(wine,i,j-1,year+1);
  return max(start,end);
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for(int i = 0;i < n;i++) cin >> a[i];
  cout << solve(a,0,n-1,1);
}