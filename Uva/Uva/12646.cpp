#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if((b+c==2 && a==0) || (b+c==0 && a==1))
        printf("A\n");
        else if((a+b==2 && c==0) || (b+a==0 && c==1))
            printf("C\n");
        else if((a+c==2 && b==0) || (c+a==0 && b==1))
            printf("B\n");
            else
                printf("*\n");
    }
    return 0;


}
