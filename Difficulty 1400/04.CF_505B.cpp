#include<bits/stdc++.h>
#define ll long long
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
#define    rrep(X,Y)    for(X=Y-1;X>=0;X--)
#define ml ll T,g; cin>>T; for(g=0;g<T;g++)
#define nml ll T = 1,g; for(g=0;g<T;g++)
#define pb push_back
#define pll pair<ll , ll>
using namespace std;

map<pair<ll, pll>, ll >mp;
std::vector<ll> v[205];
ll vis[205];
ll dfs(ll s , ll c , ll d)
{
   ll x = 0;
   vis[s] = 1;
   //cout<<s<<" "<<d<<endl;
   if (s == d)
      return x=1;
  
   for (auto it : v[s])
   {
      if (vis[it] == 0)
      {
         
         //cout<<s<<" "<<it<<" "<<c<<" "<<mp[{s,{it,c}}]<<endl;

         if (mp[{s,{it, c}}])
         {  
            vis[it] = 1;
           if(dfs(it, c, d)==1)
           {
            x=1;
           }
         }
         
      }
   }
      return x;
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("outp1.txt", "w", stdout);
#endif
   ll i, j;
   nml {
      ll n , m;
      cin >> n >> m;
    

      rep(i , m)
      {
         ll a , b, c;
         cin >> a >> b >> c;
         mp[ {a, {b, c}}] = 1;
         mp[ {b, {a, c}}] = 1;
         v[a].pb(b);
         v[b].pb(a);
      }
      ll q;
      cin >> q;
      rep(i , q)
      {
         ll a , b, ans = 0;

         cin >> a >> b;
         for (j = 1 ; j <= 100; j++)
         {
            memset(vis,0,sizeof(vis));
            ll p = dfs(a, j, b);
            //if (p)cout << j << endl;
            ans += p;
            
         }
         cout << ans << endl;
      }



   }

   return 0;
}
