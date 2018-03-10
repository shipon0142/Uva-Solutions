#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,t,i,j,co;
    char str[1005][100];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        for(i=0;i<=a;i++){
            scanf("%s",str[i]);
        }
        b=strlen(str[0]);
        printf("Case %d:\n",++c);
        for(j=0;j<a;j++){
                co=0;
                for(i=0;i<b;i++){
                    if(str[j][i]!=str[a][i]){
                        co++;
                    }


                }
        if(co<=1)
              printf("%s\n",str[j]);


        }
    }
     return 0;
}
