#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e,t;
    scanf("%d",&t);
    while(t--){
            scanf("%d %d %d",&a,&b,&c);
        e=c*(a+a-b);
        e=e/(a+b);
    if(e<0){
        printf("%d\n",0);
    }
    else
        printf("%d\n",e);
    }
   return 0;
}
