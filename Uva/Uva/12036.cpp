#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[200];
    int t,a,i,b,c,j=0;
    scanf("%d",&t);
    while(j<t){
         scanf("%d",&a);
         c=0;
         for(i=0;i<200;i++)arr[i]=0;
         for(i=0;i<a*a;i++){
                scanf("%d",&b);
                arr[b]++;
                if(arr[b]>a)c=1;
         }
         if(c==0)
            printf("Case %d: yes\n",j+1);
         else
            printf("Case %d: no\n",j+1);







         j++;

    }



 return 0;





}
