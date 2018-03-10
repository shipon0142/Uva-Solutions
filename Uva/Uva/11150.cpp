#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    while(scanf("%lld",&a)!=EOF){
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
        printf("%lld\n",c+1);
         else
    printf("%lld\n",c);



    }
    return 0;

}
