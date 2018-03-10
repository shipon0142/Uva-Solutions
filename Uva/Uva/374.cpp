#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll big_mod(ll num, ll p, ll mod){
   if(p==0) return 1;
   if(p%2==0){
    ll temp;
    temp=big_mod(num,p/2,mod);
    return ((temp%mod)*(temp%mod))%mod;
   }
   else{
    return ((num%mod)*(big_mod(num,p-1,mod))%mod)%mod;
   }




}
int main()
{
    ll a,b,c,d;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
        d=big_mod(a,b,c);
        cout<<d<<endl;
    }
    return 0;

}
