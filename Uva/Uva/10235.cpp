#include <bits/stdc++.h>
using namespace std;
long long i,j,a,l,m,y,b,c;
long long riv(long long k){
    l=0;
    j=k;
    while(1){
          l=l*10;
          l=l+j%10;
          j=j/10;
             if(j==0){
             return l;
        }
    }
}
long long prime(long long x){
    y=0;
  for(i=2;i<=sqrt(x);i++){
        if(x%i) continue;
         y=1;
  }
  return y;
}
int main(){
    while(scanf("%lld",&a)!=EOF){
         m=riv(a);
        b=prime(a);
        c=prime(m);
        if(b==0 && c==0 && a!=m)
            printf("%lld is emirp.\n",a);
        else if(b==1)
            printf("%lld is not prime.\n",a);
       else if(b==0 && c==0 && a==m)
            printf("%lld is prime.\n",a);
          else  if(b==0)
            printf("%lld is prime.\n",a);
    }
    return 0;
}
