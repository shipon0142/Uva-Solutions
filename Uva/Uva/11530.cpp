#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    int a,i,b,j,co;
    char str[102];
    scanf("%d",&a);
    i=0;
    while(i<=a){
            co=0;
             gets(str);
        b=strlen(str);
        for(j=0;j<b;j++){
                if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' '){
                    co=co+1;

                }
                 if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x'){
                    co=co+2;

                }
                if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y'){
                    co=co+3;

                }
              if(str[j]=='s' || str[j]=='z'){
                    co=co+4;

              }
              //printf("Case #%d: %d\n",j+1,co);
              if(j==(b-1)){
                   printf("Case #%d: %d\n",i,co);
                   co=0;
              }
        }

        if(i==a+1){
                break;
        }
        i++;

    }
    return 0;

}
