   /*SOLUTION*/
#include <bits/stdc++.h>
using namespace std;
bool arr[1000010];
long long i,j,k,a,b,arr1[1000010],m,x;
void prime(long long b){
    m=0;
        for(i=2;i<=sqrt(b);i++){
                if(!arr[i])
           for(j=i+i;j<=b;j=j+i){
                arr[j]=1;
           }
        }
        for(k=2;k<=b;k++){
            if(!arr[k])
              if(k+b-k==b && arr[k]==0 && arr[b-k]==0){
                printf("%lld = %lld + %lld\n",b,k,b-k);
              return ;
              }
        }
}
int main()
{
    while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
        prime(a);
    }
    return 0;
}
