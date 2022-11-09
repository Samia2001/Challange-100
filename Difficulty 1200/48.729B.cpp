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
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
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
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif

  FastRead
  ll i , j , k;
  nml
  {
    ll n , m;
    cin >> n >> m;
    ll a[n + 5][m + 5], b[m + 5][n + 5], c[n + 5][m + 5], cnt = 0;
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    rep1(i , n)
    {
      rep1(j , m)
      {
        cin >> a[i][j];
        c[i][j] = a[i][j];
        c[i][j] += c[i][j - 1];

      }
    }
    rep1(i , m)
    {
      rep1(j , n)
      {
        b[i][j] = a[j][i];

        b[i][j] += b[i][j - 1];
  
      }
    
    }


    rep1(i , n)
    {
      rep1(j , m)
      {

        if (a[i][j] == 0)
        {
          if (c[i][j])
            cnt++;
          if (c[i][m] > c[i][j])
            cnt++;
          if (b[j][i])
            cnt++;
          if (b[j][n] > b[j][i])
            cnt++;
        }

      }
     
    }

    cout << cnt << endl;

  }
  return 0;
}
