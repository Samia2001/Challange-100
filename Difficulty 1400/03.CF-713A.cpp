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
    map<string,ll>mp;
    cin >> n;
    rep(j , n)
    { char ch;
      string a;
      cin >> ch >> a;
      ll c = 0;
      string s = "";
      rep(i, a.size())
      {
        ll b = int(a[i]) - '0';
        if (b % 2 == 0 && c == 0)
          continue;
        else
        {
          if(b%2)
          s += "1";
          else
            s+="0";
          c = 1;
        }
      }
      if (s == "")
        s = "0";
      //cout<<s<<endl;
      if (ch == '+')
        mp[s]++;
      else if (ch == '-' && mp[s])
        mp[s]--;
      else if(ch=='?')
      {
        cout<<mp[s]<<endl;
      }
    }
  }

  return 0;
}
