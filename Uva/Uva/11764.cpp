#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],i,a=0,n,j,k,t,l;
    scanf("%d",&i);
    while(a<i){
            t=0;
            l=0;
           scanf("%d",&n);
       for(j=0;j<n;j++){
           scanf("%d",&arr[j]);
         }


         for(j=0;j<n-1;j++){
           if(arr[j]>arr[j+1]){
            l++;
           }
           if(arr[j]<arr[j+1]){
            t++;
           }
         }
         printf("Case %d: %d %d\n",a+1,t,l);






        a++;
    }
    return 0;
}
