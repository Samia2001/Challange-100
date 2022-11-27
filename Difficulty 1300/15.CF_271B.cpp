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
ll sieve[1000005];
vector<ll>v;
void prime(ll n)
{
  ll i , j;
  sieve[0] = 1;
  sieve[1] = 1;
  for (i = 4 ; i <= n ; i += 2)
    sieve[i] = 1;
  for (i = 3 ; i * i <= n; i += 2)
  {
    if (sieve[i] == 0)
    { for (j = i*i ; j <= n ; j += (2 * i))
      {
        sieve[j] = 1;
      }
    }
  }
  for(i = 0;i<=n;i++)
  {
    if(sieve[i]==0)
      v.pb(i);
  }

}
int main()
{
  FastRead
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
  ll i , j;
  prime(1000005);
  nml {
    ll n , m,mn=-nm;
    cin >> n >> m;
    ll a[n + 5][m + 5];
    rep(i , n)
    {
      ll s = 0;
      rep(j , m)
      {
        cin >> a[i][j];
        ll p = a[i][j];
        if(sieve[p])
        {
          ll ub = upper_bound(v.begin(),v.end(),p)-v.begin();
          s=s+(v[ub]-p);
        }
      }
      mn = min(mn , s);
    }
    rep(j , m)
    {
      ll s = 0;
      rep(i , n)
      {
        ll p = a[i][j];
        if(sieve[p])
        {
          ll ub = upper_bound(v.begin(),v.end(),p)-v.begin();
          s=s+(v[ub]-p);
        }
      }
      mn = min(mn , s);
    }
    cout<<mn<<endl;


  }
  return 0;
}
