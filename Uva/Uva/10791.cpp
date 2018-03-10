#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,i,x,y,z,j,ans,sum,d,co,ret;
ll prime_fact(ll num){
    if(num==1) return 2;
    sum=0;
    ans=1;
    co=0;
  while(num%2==0){
     ans=ans*2;
     co=1;
    num=num/2;
  }

  if(co==1)sum=sum+ans;
  for(i=3;i<=sqrt(num);i+=2){
    d=0;
    ans=1;
    while(num%i==0){
            d=1;
            ans=ans*i;
        num=num/i;
    }
    if(d==1){
            sum=sum+ans;
            co++;
    }
  }
  if(num!=1){
        sum=sum+num;
        co++;
  }
  if(co==1)return sum+1;
  else
    return sum;
}


int main()
{
    j=1;
      while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
       ret= prime_fact(a);
            printf("Case %lld: %lld\n",j++,ret);
      }
 return 0;
}
