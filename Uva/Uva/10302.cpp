#include <bits/stdc++.h>
using namespace std;
long long arr[50005],i,j,sum,a;
void algo (){
    sum=0;
   for(i=1;i<=50001;i++){
        sum=sum+(i*i*i);
    arr[i]=sum;

   }

}
int main()
{
    algo();
    while(scanf("%lld",&a)!=EOF){
        printf("%lld\n",arr[a]);
    }
    return 0;
}
