#include <bits/stdc++.h>
using namespace std;
bool arr[100000010];
long long i,j,k,a,b,m,x,d,l=0;
void prime(){
    m=0;
    arr[0]=1;
    arr[1]=1;
        for(i=3;i<=sqrt(100000005);i+=2){
                if(!arr[i])
           for(j=(3*i);j<=100000005;j=j+(2*i)){
                arr[j]=1;
           }
        }


}
int main()
{
       prime();
    while(scanf("%lld",&a)!=EOF){
            l=0;
            if(a<=4){
                printf("%lld is not the sum of two primes!\n",a);
            }
    else if(a%2==1){
        if(arr[a-2]==0){
            printf("%lld is the sum of 2 and %lld.\n",a,a-2);
        }
        else
            printf("%lld is not the sum of two primes!\n",a);
     }
     else{
        d=a/2;
     if(d%2==0)d--;
     else d=d-2;
        for(i=d;i>=3;i-=2){
                if(d<3)break;
                l=0;
            if(arr[i]==0 && arr[a-i]==0){
                printf("%lld is the sum of %lld and %lld.\n",a,i,a-i);
        l=1;
                break;
            }

          }
     if(l==0)
             printf("%lld is not the sum of two primes!\n",a);
     }
    }
    return 0;


}
