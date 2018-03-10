#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,a,j,arr[20],m,c;
    char str[20][200];
    scanf("%d",&a);
    while(i<a){
            for(j=0;j<10;j++){
                scanf("%s",str[j]);
                scanf("%d",&arr[j]);
            }
            m=arr[0];
         printf("Case #%d:\n",i+1);
            for(j=1;j<10;j++){
               if(arr[j]>m){
                    m=arr[j];
               }
            }
            for(j=0;j<10;j++){
                    if(arr[j]==m){
                        printf("%s",str[j]);
                        printf("\n");
                    }
            }

        i++;


    }
    return 0;

}
