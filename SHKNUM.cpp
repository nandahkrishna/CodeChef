#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
vector<ll> p2;
vector<ll> xy;
int main()
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  int p = 1;
  for(int c = 0; c < 32; c++)
  {
    p2.push_back(p);
    p=p*2;
  }
  for(int i = 1; i < 32; i++)
  {
    p = p2[i];
    for(int j = 0; j < 32; j++)
    {
      if(j!=i) xy.push_back(p+p2[j]);
    }
  }
  sort(xy.begin(),xy.end());
  int T; cin>>T;
  int N;
  while(T--)
  {
      cin>>N;
      auto u = upper_bound(xy.begin(),xy.end(),N);
      auto l = --u;
      u++;
      ll ls = N-(*l), us = (*u)-N;
      if(ls<=us)
      {
          cout<<ls<<endl;
      }
      else cout<<us<<endl;
  }
  return 0;
}
