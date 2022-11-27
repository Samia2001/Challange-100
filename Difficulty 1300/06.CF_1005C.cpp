#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("outp1.txt", "w", stdout);
#endif
   ll i , j;
   ll n , k, s = 0, a;
   cin >> n;
   map<ll, ll>mp, in;
   vector<ll>v;
   for (i = 0 ; i < n; i++)
   {
      cin >> a;
      mp[a]++;

   }

   for (auto it : mp) {
      v.push_back(it.first);
   }
   for (i = v.size() - 1; i >= 0; i--)
   {
      ll p = 1, cnt = 0, x = 0;
      while (cnt<31)
      {

         if (mp[p - v[i]] == 0 || (p - v[i] == 0 || p - v[i] == v[i]) && mp[v[i]] < 2)
         {

            p *= 2;
            cnt++;

         }
         else
         {
            x = 1;
            break;
         }
      }

      if (x == 0)
      {
         s += mp[v[i]];
      }

   }

   cout << s << endl;

}
