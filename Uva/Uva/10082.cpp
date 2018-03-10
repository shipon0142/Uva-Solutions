#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j;
    char ch[2002];
    char str1[]={"`1234567890-="};
    char str2[]={"QWERTYUIOP[]"};
    char str3[]={"ASDFGHJKL;'"};
    char str4[]={"ZXCVBNM,./"};
    int ch1 = 92;
    while(gets(ch)){
        l=strlen(ch);
        for(i=0;i<l;i++){
                if(ch[i]==' '){
            printf(" ");
        continue;

                }
            for(j=0;j<strlen(str1);j++){
               if(ch[i]==str1[j]){
                    printf("%c",str1[j-1]);

               }
        }
        for(j=0;j<strlen(str2);j++){
               if(ch[i]==str2[j]){
                    printf("%c",str2[j-1]);

               }

        }
        for(j=0;j<strlen(str3);j++){

               if(ch[i]==str3[j]){
                    printf("%c",str3[j-1]);
               }

        }
        for(j=0;j<strlen(str4);j++){

               if(ch[i]==str4[j]){
                    printf("%c",str4[j-1]);

               }

        }
        if(ch[i]==92){
            printf("]");

        }
        }
        printf("\n");

    }
    return 0;

}
