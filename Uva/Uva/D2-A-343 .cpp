#include <bits/stdc++.h>
using namespace std;
int r[150],c[150];
char arr[150][150];

int main()
{
    int t,i,j,sum;
    while(scanf("%d",&t)!=EOF){
        for(i=0;i<t;i++){
                r[i]=0;
                c[i]=0;
                scanf("%s",&arr[i]);
        }
        getchar();
        for(i=0;i<t;i++){
            for(j=0;j<t;j++){
                   // printf("%d%d   ",i,j);
            if(arr[i][j]=='C')r[i]++;

            if(arr[i][j]=='C') c[j]++;
            }

        }
          sum=0;
        for(i=0;i<t;i++){
            sum=sum+((r[i]*(r[i]-1))/2);
             sum=sum+((c[i]*(c[i]-1))/2);
        }
        printf("%d\n",sum);
    }
    return 0;
}
