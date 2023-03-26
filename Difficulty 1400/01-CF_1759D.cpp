#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
#define ml ll T,g; cin>>T; for(g=0;g<T;g++)
#define nml ll T = 1,g; for(g=0;g<T;g++)
#define case "Case "<<g+1<<":"
#define pb push_back
#define pll pair<ll , ll>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
  ll i , j;
  ml {
    ll n , m, c = 0,k=1;

    cin >> n >> m;
    ll N = n;

    while (n % 10 == 0)
    {
      n /= 10;
      c++;
     
    }

    while (n % 5 == 0)
    { 
      if (k * 2 <= m)
      {
        k *= 2;
      }
      else
        break;
      n/=5;
    }
    while (n % 2 == 0)
    { 
      if (k * 5 <= m)
      {
        k *= 5;
      }
      else
        break;
      n/=2;
    }
    while(k*10<=m)k*=10;

    cout<<((m/k)*k)*N<<endl;





  }
  return 0;
}
