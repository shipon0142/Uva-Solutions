#include <bits/stdc++.h>
using namespace std;
int main()
{
        int a,c,b,d;
    while(scanf("%d %d",&a,&b)!=EOF){
            if(a==0 && b==0) break;
    c=sqrt(a);
    d=sqrt(b);
            //if(c*c==a)
       // printf("%d\n",c);
          //   else
          if(c*c==a)
                printf("%d\n",d-c+1);
    else
        printf("%d\n",d-c);
    }

 return 0;






}
