#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,r,i,arr[4000],arr1[4000],b,c,j,co;
    scanf("%d",&a);
    while(a--){

        scanf("%d",&r);
        scanf("%d",&b);
        for(i=1;i<=b;i++){
            scanf("%d",&arr[i]);
        }
    for(i=1;i<=r;i++){
            arr1[i]=0;
    }
    for(j=1;j<=b;j++){
        for(i=1;i<=r;i++){
                if(i%arr[j]==0)arr1[i]=1;
        }
    }
    co=0;
    for(j=1;j<=r;j++){
            if(arr1[j]==1 && j%7!=6 && j%7!=0) {
                //printf("%d\n",j);
                co++;
            }

    }

    printf("%d\n",co);






    }
    return 0;





}



