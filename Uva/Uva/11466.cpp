#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,i,d,co,s;
ll prime(ll num){
    co=0;
   while(num%2==0){
    num/=2;
    d=2;
    co=1;
   }
   for(i=3;i<=sqrt(num);i+=2){
        s=0;
         while(num%i==0){
            num/=i;
            d=i;
   if(s==0){
       co++;
       s=1;
   }
         }
   }
   if(num>2){
        d=num;
        co++;
   }
  if(co>1) return d;
  else return -1;
}
int main()
{
   while(scanf("%lld",&a)!=EOF){
        if(a==0)break;
   if(a<0)a*=-1;
    cout<<prime(a)<<endl;
   }
 return 0;
}
