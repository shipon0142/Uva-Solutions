#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    while(scanf("%lld %lld",&a,&b)!=EOF){
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

        printf("%lld\n",c);





    }
    return 0;

}
