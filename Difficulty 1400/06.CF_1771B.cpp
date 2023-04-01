#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
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
  ml {
    ll n  , m,s=0;
    cin >> n >> m;
    ll mp[n + 5];
    rep1(i,n)
    mp[i]=1e18;
    rep(i , m)
    {
      ll a, b;
      cin >> a >> b;
      if (a > b)
        swap(a, b);
      mp[a]=min(mp[a],b-1);
    }
    ll mn = n;
    for(i = n;i>=1;i--)
    {
      mp[i] = min(mn , mp[i]);
      mn = mp[i];
      s+= mp[i]-i;
     
      //cout<<mp[i]<<endl;
    }
    cout<<n+s<<endl;



  }

  return 0;
}
