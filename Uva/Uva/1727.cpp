#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,b,j,c,co,k,x;
    char month[13][10]={"F","JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    char day[8][10]={"G","SUN","MON","TUE","WED","THU","FRI","SAT"};
    char str1[10],str2[10];
    scanf("%d",&t);
    while(t--){
         scanf("%s %s",str1,str2);
         for(i=1;i<=12;i++){
            if(!strcmp(str1,month[i])) {
                    b=i;
                    if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12) b=31;
                    else if(b==2) b=28;
                    else b=30;
            }

         }
         for(i=1;i<=7;i++){
                 if(!strcmp(day[i],str2)) c=i;
         }
         co=1;
         k=1;
         x=0;
         for(i=1;i<=6;i++){
            for(j=1;j<=7;j++){
                    if(co>=c){
                            if(j>=6) x++;
                     if(k==b) break;
                     k++;
                       }
                    co++;
            }
         }
      printf("%d\n",x);
    }
   return 0;
}
