#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b;
   while(scanf("%lld",&a)!=EOF){
    a=(a+1)/2;
    a=2*a*a-1;
    a=(3*a)-6;
    printf("%lld\n",a);
   }
return 0;
}
