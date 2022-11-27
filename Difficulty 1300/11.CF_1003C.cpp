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
#define sf(T) scanf("%lld",&T)
#define pf(T) printf("%lld\n",T)
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
#define ok return 0

using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
///Chess moves.........
// int dx[] = {+0, +0, -1, +1}; ///Up-down, Left-Right// int dy[] = {+1, -1, +0, +0};
// int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's Move// int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
// int dx[] = {-2, -2, -1, -1,  1,  1,  2,  2}; ///Knight's Move// int dy[] = {-1,  1, -2,  2, -2,  2, -1,  1};
///Constants........
const ll mod = 1e9 + 7;
const ll Max = 2e5 + 5;
const ll inf = 1e18 + 5;
ll gcd(ll a, ll b) { while (b) { a %= b; swap(a, b);} return a;}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b);}
ll bigmod(ll a, ll b, ll mod) {b %= (mod - 1); ll result = 1ll; while (b > 0ll) {if (b & 1ll) result = result * a % mod; a = a * a % mod; b >>= 1ll;} return result;}
ll inverse(ll a, ll M) {if (gcd(a, M) == 1) return bigmod(a, M - 2, M) % M; return 1;}
ll ncr(ll a, ll b, ll mod) { ll x = max(a - b, b), ans = 1; for (ll K = a, L = 1; K >= x + 1; K--, L++) { ans = ans * K % mod; ans = ans * inverse(L, mod) % mod;} return ans;}

bool cmp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
  if (a.first == b.first)
    return (a.second > b.second);
  else
    return (a.first < b.first);
}


int main()
{
  FastRead
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
  ll i , j;

  nml
  {
    ll n , k;
    cin >> n >> k;
    ll a[n + 5];
    double mx = 0;
    rep1(i , n)
    {
      cin >> a[i];
    }
    ll K = k;
    while(K<=n)
    {
      ll s = 0,m=0;
      i = 1;
      while(k)
      {
        s+=a[i];
        k--;
        i++;
      }
      m = max(m , s);
      for(i = K+1;i<=n;i++)
      {
        s=s+a[i]-a[i-K];
         //cout<<s<<" "<<a[i]<<" "<<a[i-K]<<endl;
        //cout<<s<<" "<<a[i-k]<<endl;
        m = max(m,s);
      }
     
      double S = m;
      S/=K;
      mx = max(mx,S);
      K++;
      k = K;
    }
    cout<<fs(10)<<mx<<endl;
  }

  return 0;
}
