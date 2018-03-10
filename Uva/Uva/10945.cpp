#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j;
    char str1[100],str2[100],str3[100];
    while(gets(str1)){
            if(strcmp(str1,"DONE")==0) break;
            len=0;
            for(i=0;str1[i]!='\0';i++){
                if(str1[i]>='a' && str1[i]<='z'){
                    str2[len]=str1[i]-32;
                    len++;
                }
                if(str1[i]>='A' && str1[i]<='Z'){
                    str2[len]=str1[i];
                    len++;
                }

            }
            str2[len]='\0';
                       j=0;
            for(i=len-1;i>=0;i--){
               str3[j]=str2[i];
               j++;

            }
            str3[j]='\0';
            if(strcmp(str2,str3)==0){
                printf("You won't be eaten!\n");
            }
            else{
                printf("Uh oh..\n");
            }

    }
    return 0;
}
