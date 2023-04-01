//BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll ;
typedef pair<ll, ll> pll ;


int main()
{
    ll tc;
    cin >> tc;
    ll i , j;
    while(tc--) {
       ll n,avg=0;
       cin >> n;
       ll a[n + 5];
       for(i = 0 ;i<n ; i++)
       {
           cin >> a[i];
       }
       for(i = 0 ;i<n-1 ; i++)
       {
           if(a[i+1]<a[i])
           {
               ll av=(a[i+1]+a[i])/2 + bool((a[i+1]+a[i])%2);
               avg = max(avg,av);
           }
       }

       for(i = 0 ;i<n ; i++)
       {
           a[i]=abs(a[i]-avg);
       }
       for(i = 0 ;i<n-1 ; i++)
       {
           //cout<<a[i]<<endl;
           if(a[i+1]<a[i])
           {
                //cout<<a[i]<<" "<<a[i+1]<<endl;
               avg=-1;
               break;
           }
       }
       cout<<avg<<endl;

    }
    return 0;
}
