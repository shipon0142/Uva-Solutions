#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,m,arr[100000],j=0,k;
    scanf("%lld",&t);
    while(j<t){
       scanf("%lld",&m);
       for(i=0;i<m;i++){
        scanf("%lld",&arr[i]);
       }
       k=arr[0];
        for(i=0;i<m;i++){
        if(arr[i]>k) k=arr[i];
       }


       printf("Case %lld: %lld\n",j+1,k);
       j++;
    }
    return 0;
}
