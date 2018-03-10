#include <stdio.h>
#include <string.h>
int main()
{
    int i,co;
    co=0;
    char str[1000];
    while(gets(str)){
        for(i=0;str[i]!='\0';i++){
                if(co%2==0 && str[i]=='"'){
                    printf("``");
                    co++;
                }
               else if(co%2==1 && str[i]=='"'){
                    printf("''");
                    co++;

                }
                else{
            printf("%c",str[i]);
                }
        }
        printf("\n");
    }
    return 0;
}
