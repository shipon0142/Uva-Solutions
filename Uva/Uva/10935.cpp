#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,arr[10000],i,co,k,m;
  while(scanf("%d",&a)!=EOF){
        if(a==0)break;
    for(i=1;i<=a;i++)arr[i]=i;
    printf("Discarded cards:");
    m=1;
    co=0;
    k=a;
             a=a+1;
             while(1){
                    if(arr[m]==0){
                        m++;
                        continue;
                    }
                    if(co==k-1){
                            printf("\n");
                        break;
                    }
                  printf(" %d",arr[m]);
                  co++;

                          arr[a]= arr[m+1];
                          arr[m+1]=0;
                          a++;
                          m++;

                    if(co!=k-1)
                printf(",");



             }
             printf("Remaining card: %d\n",arr[a-1]);

  }
  return 0;

}
