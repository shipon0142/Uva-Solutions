#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,i=0;
   double x,y,z,b,c;

    while(scanf("%d",&a)!=EOF){
            if(a==0) break;
        scanf("%lf %lf %lf",&x,&y,&z);
        if(a==1){
            c=(y-x)/z;
            b=(x*z)+(0.5*c*z*z);
           printf("Case %d: %0.3lf %0.3lf\n",++i,b,c);
        }
        else if(a==2){
                c=(y-x)/z;
                b=(x*c)+(0.5*z*c*c);
                printf("Case %d: %0.3lf %0.3lf\n",++i,b,c);

        }
        else if(a==3){
        b=sqrt((x*x)+(2*y*z));
        c=(b-x)/y;
        printf("Case %d: %0.3lf %0.3lf\n",++i,b,c);
        }
        else{
            b=sqrt((x*x)-(2*y*z));
            c=(x-b)/y;
            printf("Case %d: %0.3lf %0.3lf\n",++i,b,c);
        }
    }
    return 0;






}
