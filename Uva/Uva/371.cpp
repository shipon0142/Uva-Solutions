#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,i,t,c,m,k,co;
ll arc(ll num){
    while(1){
 if(num%2){
    num=(3*num)+1;
    co++;
 }
 else{
    num=num/2;
    co++;
 }
 if(num==1){

        break;
 }
    }
 return co;
}
int main()
{
 ll h,g;
 while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a==0 && b==0)break;
        if(a<0)a=a*-1;
        if(b<0)b=b*-1;
    if(b<a){
       t=b;
       b=a;
       a=t;
    }
    m=0;
    for(i=a;i<=b;i++){
            co=0;
        c=arc(i);
        if(c>m){
            k=i;
                m=c;
        }
    }
printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,k,m);
 }
 return 0;
}
