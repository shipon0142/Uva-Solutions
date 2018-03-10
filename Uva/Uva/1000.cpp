#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  long long int a,b,i,y=0,t;
  long long int c=0,k;
  while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a>b){
            t=a;
            a=b;
            b=t;
        }
        for(i=a;i<=b;i++){
         k=i;
            while(1){
                    if(k==1){
                            c++;
                        break;
                       }
                  if(k%2==0){
                        c++;
                    k=k/2;
                   continue;
                  }
               if(k%2==1){
                     c++;
               k=(3*k)+1;
                continue;
               }
            }
            if(c>y){
                y=c;
            }
            c=0;
        }
        printf("%lld %lld %lld\n",a,b,y);
        y=0;
    }
    return 0;
  }
