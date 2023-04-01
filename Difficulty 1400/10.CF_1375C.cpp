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
  ml{
    ll n;
    cin >> n ;
    ll a[n + 5];
    rep(i , n)
    {
      cin >> a[i];
    }
    if(a[0]>a[n-1])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
   return 0;
}
