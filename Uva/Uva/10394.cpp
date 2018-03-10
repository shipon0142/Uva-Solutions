#include <bits/stdc++.h>
using namespace std;
bool arr[20000010];
long long i,j,k,a,b,m,x,arr1[20000000],f;
void prime(long long b){
    m=0;
        for(i=3;i<=sqrt(b);i+=2){
                if(!arr[i])
           for(j=i+i;j<=b;j=j+i){
                arr[j]=1;
           }
        }
        for(k=3;k<=b-2;k+=2){
            if(!arr[k] && !arr[k+2]){
                arr1[m]=k;
                m=m+1;
             //   arr1[m]=k+2;
             //   m=m+1;
            }
        }
            return ;
}
int main()
{
    prime(20000001);
    while(scanf("%lld",&a)!=EOF){

               printf("(%lld, %lld)\n",arr1[a-1],arr1[a-1]+2);


    }
    return 0;


}
