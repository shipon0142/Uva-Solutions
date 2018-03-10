#include <bits/stdc++.h>
using namespace std;
long long a,b,c,i,j;
bool arr[10000005];
void prime(){
 a=10000005;
 arr[1]=1;
 for(i=3;i<=sqrt(a);i+=2){
        if(!arr[i])
    for(j=i+i;j<=a;j+=i){
      arr[j]=1;

    }
 }
}
int main()
{
    prime();
    while(scanf("%lld",&b)!=EOF){
         if(b<8){
            printf("Impossible.\n");
         }
         else if(b==8){
            printf("2 2 2 2\n");
         }
         else if(!arr[b-6] && (b-6)%2==1){
            printf("2 2 2 %lld\n",b-6);

         }
            else if(b%2==0){
                    b=b-4;
                    for(i=3;i<=b;i+=2){
                            if(!arr[i] && !arr[b-i]){
                                printf("2 2 %lld %lld\n",i,b-i);
                                break;
                            }
                    }
            }
            else{
                b=b-5;
                    for(i=3;i<=b;i+=2){
                            if(!arr[i] && !arr[b-i]){
                                printf("2 3 %lld %lld\n",i,b-i);
                                break;
                            }
                    }
            }
    }
 return 0;


}
