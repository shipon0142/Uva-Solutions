#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,i,arr[4000],n,k,arr1[4000];
    while(scanf("%d",&a)!=EOF){
            k=0;
            n=a;
        for(i=0;i<a;i++){
            scanf("%d",&arr[i]);
        }
     for(i=0;i<a-1;i++){
          arr1[i]=abs(arr[i]-arr[i+1]);

     }
     sort(arr1,arr1+a-1);
     for(i=0;i<a-2;i++){
       if(arr1[i]+1!=arr1[i+1]){
         k=1;
         break;
       }
     }
     if(k==0)
        printf("Jolly\n");
     else
     printf("Not jolly\n");
    }
return 0;

}
