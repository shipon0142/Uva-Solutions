#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{

    int a,i=0,c;
    char str[10000];
    scanf("%d",&a);
    while(i<a){
        scanf("%s",str);
        c=strlen(str);

        if(str[c-1]-48==5 && str[c-2]-48==3){
                printf("-\n");
        }
        else if(str[c-1]-48==4 && str[0]-48==9){
                printf("*\n");
        }
        else if(str[0]-48==1 && str[1]-48==9 && str[2]-48==0){
                printf("?\n");
        }
        else{
            printf("+\n");
        }
        i++;

    }
    return 0;

}
