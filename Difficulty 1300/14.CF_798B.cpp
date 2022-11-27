#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define endl "\n"
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
#define    rrep(X,Y)    for(X=Y-1;X>=0;X--)
#define    rrep1(X,Y)   for(X=Y;X>=1;X--)
#define ml ll T,g; cin>>T; for(g=0;g<T;g++)
#define nml ll T = 1,g; for(g=0;g<T;g++)
#define case "Case "<<g+1<<": "
#define fs(n) fixed << setprecision(n)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define no cout << "no\n"
#define      len(n)             (long long)((log(n)/log(10))+1.0000000001)
#define FastRead                      \
ios_base::sync_with_stdio(false); \
cin.tie(0);
#define pi acos(-1)
#define pb push_back
#define pll pair<ll , ll>
#define ceill(ggg,gg) (ggg/gg)+bool(ggg%gg)
#define pqmn priority_queue<ll, vector<ll>, std::greater<ll> >
#define nm -1e18

using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

bool cmp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
  if (a.first == b.first)
    return (a.second > b.second);
  else
    return (a.first < b.first);
}

string fun(string s)
{
  string a = s;
  reverse(a.begin(), a.end());
  a = s + "#" + a;
  ll n = a.size(), i , j;
  std::vector<ll> ar(n + 1);
  for (i = 1 ; i < n  ; i++)
  {
    j = ar[i - 1];
    while (j > 0 && a[i] != a[j])
      j = ar[j - 1];
    if (a[i] == a[j])
      j++;
    ar[i] = j;
  }
  ll p = ar[n - 1];
  a = s.substr(0, p);
  return a;

}
int main()
{
  FastRead
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
  ll i , j;
  nml {
    ll n, x = 0, mn = -nm;
    cin >> n;
    string a[n + 5], s[n + 5];
    rep(i , n)
    {
      cin >> a[i];
      s[i] = a[i];
    }
    rep(i , n)
    {
      string p = a[i];
      ll c = 0;
      for (j = 0 ; j < n ; j++)
      {
        string b = a[j], b1;
        b1 = b;

        while (1)
        {
          if (b == p)break;
          char ch = b[0];
          b.erase(b.begin());
          b += ch;
          c++;
          
          if (b == b1&&b!=p)
          {
            c=-nm;
            break;
          }
        }

      }

      mn = min(mn , c);
    }
    if(mn==-nm)cout<<-1<<endl;
    else
    cout << mn << endl;

  }
  return 0;
}
