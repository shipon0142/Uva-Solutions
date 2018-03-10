#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,a,b,c,d;
    scanf("%d",&t);
    while(i<t){
            scanf("%d %d %d",&a,&b,&c);
    d=(b+c)%a;
    if(d==0)d=a;
    printf("Case %d: %d\n",i+1,d);
    i++;
    }
    return 0;
}
