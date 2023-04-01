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
    ll n , k, x = 0;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    map<ll, ll>mp, mp1;
    rep(i , n)
    {
      mp[b[i]]++;
      mp1[a[i]]++;
    }
    if (n < 4)
    { if (a != b)cout << "NO" << endl;
      else cout << "YES" << endl;
    }
    else if (n == 4)
    {
      if (a != b)swap(a[0], a[3]);
      if (a != b)cout << "NO" << endl;
      else cout << "YES" << endl;
    }
    else if (n == 5)
    {
      rep(i, n)
      {
        if (mp[a[i]] != mp1[a[i]] || a[2] != b[2])
        {
          x = 1;
          break;
        }
      }
      if (x)cout << "NO" << endl;
      else cout << "YES" << endl;
    }

    else
    {
      x = 0;
      rep(i , n)
      {
        if(mp[a[i]]!=mp1[a[i]])
        {
          x=1;
          break;
        }
      }
      if (x)cout << "NO" << endl;
      else cout << "YES" << endl;
    }


  }
  return 0;
}
