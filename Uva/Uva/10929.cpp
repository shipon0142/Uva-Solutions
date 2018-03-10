#include <iostream>
#include <cstdio>
#include <string.h>
int main()
{
    char ch[1001];
    long long i,l,b,c;
    while(gets(ch)){
            b=0;
            c=0;
    l=strlen(ch);
    if(ch[0]=='0' && l==1){
            break;
    }

    for(i=0;i<l;i=i+2){
              b=b+ch[i]-'0';

    }
    for(i=1;i<l;i=i+2){
              c=c+ch[i]-'0';

    }
    if((c-b)%12==0){
        printf("%s is a multiple of 11.\n",ch);

    }
    else
        printf("%s is not a multiple of 11.\n",ch);
    }
    return 0;
}
