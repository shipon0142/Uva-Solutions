#include <bits/stdc++.h>
using namespace std;
int i,j,sum,k,m;
int prime(int b){
    k=0;
    for(j=2;j<=sqrt(b);j++){
        if(b%j)continue;
            k=1;

    }
    return k;
}

int main(){

  char str[25];
  while(gets(str)){
        sum=0;
    for(i=0;str[i]!='\0';i++){


        if(str[i]>=65 && str[i]<=91){
           str[i]=str[i]-38;
       sum=sum+str[i];
        }
        if(str[i]>=97 && str[i]<=123){
           str[i]=str[i]-96;
          sum=sum+str[i];
        }

    }
    m=prime(sum);

   if(m==0)
      printf("It is a prime word.\n");
    else
    printf("It is not a prime word.\n");
  }
  return 0;
}
