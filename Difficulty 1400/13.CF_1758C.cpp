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
    ll n , x;
    cin >> n >> x;
    if(n%x)
      cout<<-1<<endl;
    else
    {
      ll a[n + 5]={0};
      a[1]=x;
      a[n]=1;
      for(i =2;i<n;i++)
      {
        if(i!=x)
        {
          a[i]=i;
        }
        else
          a[i]=n;
      }
      ll pos = x;
      for(i = x+x;i<n;i+=x)
      {
        if(n%i==0 && i%pos==0)
        {
          swap(a[pos],a[i]);
          pos = i;
        }
      }
      for(i = 1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }

  }
  return 0;
}
