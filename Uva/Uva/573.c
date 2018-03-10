
  /*SOLUTION*/
#include <stdio.h>
int main()
{
    float h,u,d,f,n,sum,l,h1,m,g;
    int co,j;
    while(scanf("%f %f %f %f",&h,&u,&d,&f)!=EOF){
            if(h==0){
                break;
            }
            l=u*(f/100);
            co=1;
            sum=0;
            h1=0;
            g=0;
            j=0;
            while(1){
                    n=h1+u;
                    if(n>h){
                    g=1;
                        break;
                    }
                    if(n<0){
                        g=2;
                        break;
                    }

                    u=u-l;
                    m=n-d;
                    h1=m;
                        if(h1>h){
                        g=1;
                       break;
                    }
                    if(h1<0){
                        g=2;
                        break;
                    }
                    if(u<0){
                        u=0;
                    }
                    co++;
    }
           if(g==1){
            printf("success on day %d\n",co);
            continue;
           }

           if(g==2){
            printf("failure on day %d\n",co);
            continue;
           }
    }
    return 0;
}
