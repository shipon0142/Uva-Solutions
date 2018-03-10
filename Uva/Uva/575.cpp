/*SOLUTION*/
#include <bits/stdc++.h>
using namespace std;
int i,l,j,b,z,h,a,sum=0;
     char str[100];
int pow(int m){
    a=1;
    for(h=1;h<=m;h++){
        a=2*a;

    }

     return a;
    }
int main()
{
     while(gets(str)){
            if(strlen(str)==1 && str[0]==48)break;
            sum=0;
        l=strlen(str);
        z=l;
        for(j=0;j<l;j++){
            str[j]=str[j]-48;
            b=pow(z);
            sum=sum+(str[j]*(b-1));
            z--;

        }
        printf("%d\n",sum);
    }
    return 0;
}
