#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,arr[30],n,j,temp,k;
    scanf("%d",&t);
    while(i<t){
            scanf("%d",&n);
          for(j=0;j<n;j++){
            scanf("%d",&arr[j]);
          }

          for(j=0;j<n-1;j++){
                for(k=j+1;k<n;k++){
                    if(arr[j]>arr[k]){
                       temp=arr[k];
                       arr[k]=arr[j];
                       arr[j]=temp;

                    }
                }

          }
                printf("Case %d: %d\n",i+1,arr[((n+1)/2)-1]);







        i++;
    }
    return 0;

}
