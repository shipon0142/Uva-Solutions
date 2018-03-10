#include <bits/stdc++.h>
using namespace std;
int t,a,co[30],i,co1[30],m,co2[30],temp,b,j=0;
int main()
{
      char str[1000];
          m=0;
       scanf("%d",&t);
    while(gets(str)){


    for(a=0;str[a]!='\0';a++){
          if(str[a]>=65 && str[a]<=91){
            co[str[a]-65]++;
                  }
            if(str[a]>=97 && str[a]<=123){
            co[str[a]-97]++;
          }

    }
    if(j==t) break;
     j++;
    }
        //putchar();
    m=0;
    for(a=0;a<26;a++){
            if(co[a]>0){
                    co1[m]=co[a];
                     co2[m]=a+65;
                     m++;
            }
    }
    for(a=0;a<m-1;a++){
            for(b=a;b<m;b++){
                    if(co1[a]<co1[b] || (co2[a]>co2[b] && co1[a]==co1[b])){
                        temp=co1[a];
                        co1[a]=co1[b];
                        co1[b]=temp;
                        temp=co2[a];
                        co2[a]=co2[b];
                        co2[b]=temp;
                     }
            }
    }
    for(a=0;a<m;a++){
           printf("%c %d\n",co2[a],co1[a]);
    }
    return 0;

}
