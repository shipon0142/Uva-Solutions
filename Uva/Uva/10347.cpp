#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,d;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){

        s=(a+b+c)/2;
        d=sqrt(s*(s-a)*(s-b)*(s-c))*(4.00/3.00);
        if(d>0.0)
            printf("%0.3lf\n",d);
        else {
                d=-1.00;
            printf("%0.3lf\n",d);
        }

    }
   return 0;
}
