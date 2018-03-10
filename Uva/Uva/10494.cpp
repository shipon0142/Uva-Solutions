#include <bits/stdc++.h>
using namespace std;
int main()
{

 long long a,l,i,val,c,y,m,d;
 char str[100000],ch,k[100000];
 while(scanf("%s %c %lld",&str,&ch,&a)!=EOF){
     l=strlen(str);
     val=0;
     c=0;
     y=0;
     d=0;
     //k[c]=0;
     for(i=0;i<l;i++){
        val=val*10+(str[i]-'0');
        k[c]=((val/a)+'0');
        c++;
        if(val>=a){
                y=1;

                val=val%a;

        }


     }
     //k[c]='\0';
     if(y==0 && ch=='/'){
        printf("0\n");
        continue;
     }
     if(ch=='%')
    printf("%lld\n",val);
    if(ch=='/'){
             for(m=0;m<c;m++){
                if(k[m]!='0') d=1;
                if(d==1){
                    printf("%c",k[m]);
                }

             }
printf("\n");




    }

 }
 return 0;
}
