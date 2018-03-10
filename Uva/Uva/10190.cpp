#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,k,arr[10000],l,i;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            if(a<2 || b<2 || b>a){
                printf("Boring!\n");
                continue;
            }
            k=0;
            l=0;
             arr[0]=a;
             k++;
            while(1){
                if((a%b)==0){
                        a=a/b;
                     arr[k]=a;
                       k++;
                       if(a==1) break;
                }
                else{
                    l=1;
                    break;
                }

            }
            if(l==1){
                printf("Boring!\n");
                continue;
            }
            for(i=0;i<k-1;i++){

                printf("%lld ",arr[i]);
            }
            printf("%lld\n",1);
        }


    return 0;


}
