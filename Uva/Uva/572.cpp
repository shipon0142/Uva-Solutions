#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j,count,val[300][300],co,sum,x,y;
    char str[300][300];
    while(scanf("%d %d",&a,&b)!=EOF){
            if(a==0 && b==0) break;
            getchar();

            count=0;
        for(i=0;i<a;i++){


           // for(j=0;j<b;j++){
                scanf("%s",&str[i]);
                //val[i][j]=0;
            //}
        }
        for(i=0;i<a;i++){


            for(j=0;j<b;j++){
                //scanf("%s",&str[i]);
                val[i][j]=0;
            }
        }
          co=0;

       for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                    sum=0;

                     x=i;
                    y=j;
                    if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                            //printf("%c%d%d    ",str[i][j],i,j);
                            sum=sum+val[x][y];
                    val[x][y]=1;
                    x=i-1;
                    y=j;
                       if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                           //printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i-1;
                           y=j+1;
                       if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                           //printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i;
                           y=j+1;
                       if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                          // printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i+1;
                           y=j+1;
                      if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                          // printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i+1;
                           y=j;
                      if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                          // printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i+1;
                           y=j-1;
                      if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                         //  printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i;
                           y=j-1;
                      if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                          // printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       x=i-1;
                           y=j-1;
                     if(str[x][y]=='@' && x>=0 && x<a && y>=0 && y<b){
                         // printf("%d%d    ",i,j);
                                 sum=sum+val[x][y];
                                 val[x][y]=1;
                       }
                       if(sum==0){
                        co++;

                       }
                    }
                    sum=0;

                //printf("%d,%d%d    ",val[i][j],i,j);
            }
           // printf("\n");
        }
        //for(i=0;i<a;i++){
          //  for(j=0;j<b;j++){
               // printf("%d,%d%d    ",val[i][j],i,j);
         //   }
           // printf("\n");
       // }
        printf("%d\n",co);

    }









 return 0;









}
