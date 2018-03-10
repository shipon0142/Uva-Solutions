#include <bits/stdc++.h>
using namespace std;
int a,b,c,i,j,d,p,q,s,r,x,y,co,l,m,n,t;
int pow(int b,int c){
      d=1;
     for(i=1;i<=c;i++){
            d=d*b;
     }
     return d;
}
int hd(int a){
    s=0;
    r=0;
    while(1){
    q=a%10;
    a=a/10;
    s=s+(q*pow(16,r));
    r++;
    if(a==0){
            return s;
         }
    }
}
int cou( int bi){
   co=0;
   while(1){
    if(bi%2==1){
        co++;
    }
    bi=bi/2;
    if(bi==0){
        return co;
    }
   }
}
int main()
{
    scanf("%d",&t);
    while(t--){
            scanf("%d",&p);

          l=cou(p);
          m=hd(p);
          n=cou(m);
           printf("%d %d\n",l,n);
    }
    return 0;
}
