#include <bits/stdc++.h>
using namespace std;
long long k,d,e,f;
long long rev(long long c){
    e=0;
    d=0;
    f=0;
    while(1){
        k=c%10;
        c=c/10;
        d=(d+k+e)*10;
        if(c==0){
          return d/10;
        }
    }
}
int main()
{
    long long a,b,x,l,m,co;
    scanf("%lld",&m);
    while(m--){
    scanf("%lld",&a);
            l=a;
            co=0;

     while(1){
        b=rev(l);
        if(l==b){
            printf("%lld %lld\n",co,b);
            break;
        }
        co++;
       l=l+b;
     }
    }
    return 0;
}
