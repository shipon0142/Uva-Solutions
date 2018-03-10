#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,i=0,b,j,co,c,d,k;
  scanf("%d",&a);
  while(i<a){
        k=1;
    scanf("%d",&b);
    co=0;
    for(j=2;j<=sqrt(b);j++){
       if(b%j) continue;

        if(k==1){
            c=j;
        k++;
        continue;
        }
        if(k==2){
                d=j;
               break;
        }
    }
    printf("Case #%d: %d = %d * %d = %d * %d\n",i+1,b,c,b/c,d,b/d);
     i++;
  }
  return 0;


}
