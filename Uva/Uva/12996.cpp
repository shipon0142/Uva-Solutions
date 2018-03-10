#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i=0,j,arr1[50],arr2[50],m,sum;
     scanf("%d",&t);
     while(i<t){
            m=0;
            sum=0;
         scanf("%d %d",&a,&b);
          for(j=0;j<a;j++){
            scanf("%d",&arr1[j]);
            sum=sum+arr1[j];
          }
           for(j=0;j<a;j++){
            scanf("%d",&arr2[j]);
          }
          for(j=0;j<a;j++){
            if(arr2[j]>=arr1[j]);
            else m=1;
          }

        if(b>=sum && m==0)
            printf("Case %d: Yes\n",i+1);
        else
            printf("Case %d: No\n",i+1);

        i++;
     }
     return 0;
}
