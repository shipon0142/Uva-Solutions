#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,j,b,c,d,an;
    scanf("%d",&t);
    while(t--){
            an=0;
        scanf("%d",&a);
        for(i=0;i<a;i++){
                 scanf("%d %d %d",&b,&c,&d);
                an=an+(b*d);
        }
        printf("%d\n",an);

    }
    return 0;
}
