#include<bits/stdc++.h>
#define ll long long
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
#define    rrep(X,Y)    for(X=Y-1;X>=0;X--)
#define ml ll T,g; cin>>T; for(g=0;g<T;g++)
#define nml ll T = 1,g; for(g=0;g<T;g++)
#define pb push_back
#define pll pair<ll , ll>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
  ll i, j;
  nml {
   string a;
   cin >> a;
   ll ans = 0,cnt=0,mod=1e9+7;
   rrep(i , a.size())
   {
      if(a[i]=='b')cnt++;
      else
      {
         ans=(ans+cnt)%mod;
         cnt=(cnt*2)%mod;
      }
   }
   cout<<ans<<endl;
    
  }

  return 0;
}
