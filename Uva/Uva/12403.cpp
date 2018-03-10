#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main()
{
    int j,amm,sum;

 char str[100];
   scanf("%d",&j);
   sum=0;
 while(j--){
     scanf("%s",str);

     if(strcmp(str,"donate")==0){
        scanf("%d",&amm);
      sum=sum+amm;
     }
     else{
         cout<<sum<<endl;
     }
}
return 0;
}
