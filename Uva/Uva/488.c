#include <stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    a=0;
    scanf("%d",&b);
    while(a<b){

        scanf("%d %d",&c,&d);
        for(i=0;i<d;i++){
            for(j=1;j<=c;j++){
                for(k=1;k<=j;k++){
                    printf("%d",j);
                }
                printf("\n");
            }
            for(j=c-1;j>=1;j--){
                for(k=1;k<=j;k++){
                    printf("%d",j);
                }
                printf("\n");
            }
            if(i==d-1){

            }
            else{
                printf("\n");
            }
        }
        if(a==b-1){

        }
        else{
            printf("\n");
        }
   a++;
  }
    return 0;
}
