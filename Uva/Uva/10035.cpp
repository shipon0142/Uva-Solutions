#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long int1,int2,a,b,c,d,e,f,g,co,k;
      while(scanf("%lld %lld",&a,&b)!=EOF){
            if(a==0 && b==0) break;
            k=0;

            co=0;
        int1=a;
        int2=b;
        while(int1!=0 || int2!=0){

               d=int1%10;
             f=int2%10;

         int1=int1/10;

         int2=int2/10;



        //   g=d+f;
          // if(g>=10) g++;
         //  printf("%lld\n",g);
           if(d+f+k>=10){
            co++;
            k=1;
           }

           else{
                    k=0;
           }



        }
        if(co==0)
        printf("No carry operation.\n");
        else if(co==1)
            printf("1 carry operation.\n",co);
            else
            printf("%lld carry operations.\n",co);

      }
      return 0;

}
