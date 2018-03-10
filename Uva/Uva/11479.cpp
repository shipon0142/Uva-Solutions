#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,i=1,t;
    scanf("%lld",&t);
    while(i<t+1){
       scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b>c && b+c>a && c+a>b){
                if(a==b && b==c)
                printf("Case %lld: Equilateral\n",i++);
             else if(b==c || c==a || a==b)
                printf("Case %lld: Isosceles\n",i++);
           else
            printf("Case %lld: Scalene\n",i++);
        }
        else
            printf("Case %lld: Invalid\n",i++);






    }
    return 0;
}
