#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b,c,d,e,k,m,t;
    scanf("%lld",&t);
    while(t--){
            scanf("%lld %lld %lld",&a,&k,&b);
            a=a+k;
            m=a;
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
    printf("%lld\n",c-m);



    }
    return 0;

}
