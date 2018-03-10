#include <bits/stdc++.h>
using namespace std;
int main()
{
        int a,c,b,d,i,x,l,t,j,m,k;
        scanf("%d",&t);
    while(t--){
            scanf("%d",&a);
         c=sqrt(a);
         l=0;
         if(c*c==a){
            printf("0 0 %d\n",c);
            continue;
         }
         k=a;
         for(j=0;j<=c;j++){
                m=j*j;
                a=k;
                a=a-m;
         for(i=1;i<=c;i++){
                b=i*i;
                  d=a-(i*i);
                  x=sqrt(d);
            if(x*x==d){
                printf("%d %d %d\n",j,i,x);
                l=1;
                break;
            }
         }
         if(l==1) break;
         }
         if(l==0)
            printf("-1\n");

        //printf("%d\n",c);
       // printf("%d\n",a-c*c);
    }
 return 0;

}
