#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,i,arr[10],b,c,k;
    scanf("%d",&t);
    while(t--){
          scanf("%d",&a);
          for(i=0;i<10;i++){
            arr[i]=0;
          }
          for(i=1;i<=a;i++){
                k=i;
            while(1){
                b=k%10;
                c=k/10;
            arr[b]++;
            if(c==0) break;
                  k=k/10;
            }
          }
          for(i=0;i<9;i++){
            printf("%d ",arr[i]);
          }
          printf("%d",arr[9]);
          printf("\n");
    }
    return 0;
}
