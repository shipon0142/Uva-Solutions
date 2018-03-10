#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f;
    while(scanf("%lld",&a)!=EOF){
            if(a==0){
                break;
            }
               f=a;
            b=3;
            c=a;
        while(1){
                d=a/b;
                e=a%b;
                c=c+d;
                a=d+e;
                if(a<b){
                    break;
                }
        }
        if(a%3==2)
        printf("%lld\n",(c+1)-f);
         else
    printf("%lld\n",c-f);
    }
    return 0;

}
