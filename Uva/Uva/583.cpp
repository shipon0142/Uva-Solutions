#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,k,arr[1000],m;
    while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
            m=0;
            k=a;
            if(a<0){
    printf("%lld = -1 x",a);
    a=a*-1;
            }
    else
    printf("%lld =",a);
        for(i=2;i<=sqrt(a);i++){

            while(a%i==0){
                arr[m]=i;
                m++;
                    a=a/i;
                }
        }
        if(a>2){
            arr[m]=a;
            m++;
        }
            for(j=0;j<m-1;j++){
                printf(" %lld x",arr[j]);
            }
            printf(" %lld\n",arr[m-1]);
    }
    return 0;

}
