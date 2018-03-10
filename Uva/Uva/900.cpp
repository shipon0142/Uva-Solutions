#include <bits/stdc++.h>
using namespace std;
long long arr[60],a,i;
int main(){
arr[0]=0;
    arr[1]=1;
       arr[2]=2;
for(i=3;i<=55;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
     while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
        printf("%lld\n",arr[a]);
     }



return 0;




}
