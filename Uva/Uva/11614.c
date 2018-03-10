#include <stdio.h>
#include <math.h>
int main()
{

    long long a,b,c,d;
    scanf("%lld",&a);
    b=0;
    while(b<a){
        scanf("%lld",&c);
    d=(-1+sqrt(1+(8*c)))/2;
    printf("%lld\n",d);

        b++;
    }
    return 0;


}
