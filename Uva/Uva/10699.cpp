#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[1000005];
int main()
{

     ll num,count,i,j,a,n=1,b;
     while(n<=1000005){
            num=n;
            a=num;
            count=0;
        while(num%2==0){
                count=1;
               num=num/2;

        }
        for(i=3;i<=sqrt(num);i+=2){
                 j=1;
                   while(num%i==0){
                      if(j==1){
                        count++;
                        j=2;
                      }
                      num=num/i;

                   }
        }
        if(num>2)count++;
        arr[a]=count;
       // printf("%lld : %lld\n",a,count);

          n++;

     }
     while(scanf("%lld",&b)!=EOF){
            if(b==0) break;
        printf("%lld : %lld\n",b,arr[b]);
     }
     return 0;

}
