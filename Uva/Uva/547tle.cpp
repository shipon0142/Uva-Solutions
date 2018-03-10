#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,i,c,j,d,sum,x,co,m,y=0,k;
ll ddf(ll d){
while(1){
        sum=sum+d%10;
    d=d/10;
    if(d==0) break;
}
//printf("\n");




}
ll fact(ll c){
   for(j=1;j<=sqrt(c);j++){
    if(c%j)continue;
    if(j==c/j){
        ddf(j);
    }
       // printf("%lld ",j);
    else{
        ddf(j);
        ddf(c/j);

    }
    //printf("%lld %lld ",j,c/j);
   }
  // printf("\n");
}
int main()
{
    while(scanf("%lld %lld",&a,&b)!=EOF){
        m=0;
       for(i=a;i<=b;i++){
            co=0;
            sum=0;
               co++;
            //printf("%lld ",i);
              x=i;
            while(1){
                    sum=0;
               fact(x);
               co++;
               //printf("%lld ",sum);
               if(sum==15) break;
              x=sum;
               // x=sum;
                // sum=0;
               //fact(x);
               //printf(" %lld\n",sum);
              }
              if(co>m){
                m=co;
                k=i;
              }

       }
       printf("Input%lld: %lld %lld\n",y+1,a,b);
       printf("Output%lld: %lld",y+1,k);
       y++;
       x=k;
       while(1){

                    sum=0;
               fact(x);
               co++;
               printf(" %lld",sum);
               if(sum==15) break;
              x=sum;
       }
       printf("\n");
    }
    return 0;
}
