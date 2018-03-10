          /*SOLUTION*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,i,sum,c,d,k=1;
   printf("PERFECTION OUTPUT\n");

   while(scanf("%lld",&a)==1){
         if(a==0){

            break;
        }

        sum=0;
    for(i=1;i<=sqrt(a);i++){
       if(a%i)continue;
         c=i;
         d=a/i;
         if(c==d){
                   sum=sum+c;
         }
         else{
            sum=sum+c+d;
         }
    }
    sum=sum-a;

    if(sum==a)
        printf("%5lld  PERFECT\n",a);
        else if(sum>a)
            printf("%5lld  ABUNDANT\n",a);
        else if(sum<a)
            printf("%5lld  DEFICIENT\n",a);
   }
   printf("END OF OUTPUT\n");
   return 0;
}
