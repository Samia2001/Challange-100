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
  nml {
    ll n;
    cin >> n;
    map<ll, ll>mp, sz , last;
    std::vector<ll> v;
    ll divide = 0, conq = 0,p=n;
    rep1(i , n)
    {
      ll k; cin >> k;
      ll a[k + 1];
      a[0] = 0;
      rep1(j, k)
      {
        cin >> a[j];
        v.pb(a[j]);
        mp[a[j]] = i;
      }
      ll x = 0;
      for (j = k; j >= 1; j--)
      {
        if (x == 1)
        {
          mp[a[j]] = p;
        }
        if (a[j] < a[j - 1])
        {
          p++;
          divide++;
          x = 1;
        }

      }
      
      rep1(j , k)
      {
        last[mp[a[j]]] = a[j];
        sz[mp[a[j]]]++;
      }
    }
    sort(v.begin(), v.end());
    rep(i , v.size() - 1) {
      // cout<<mp[v[i]]<<" "<<last[mp[v[i]]]<<endl;
      if (mp[v[i]] != mp[v[i + 1]])
      {
        //cout<<v[i]<<" "<<sz[mp[v[i]]]<<endl;
        if (sz[mp[v[i]]] > 1 && last[mp[v[i]]] != v[i])
        { divide++;
          //cout<<v[i]<<endl;
        }

        conq++;

        sz[mp[v[i]]]--;
        sz[mp[v[i + 1]]]++;

      }
    }
    cout << divide << " " << conq << endl;
  }

  return 0;
}
