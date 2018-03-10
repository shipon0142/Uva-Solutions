          /*SOLUTION*/
#include <bits/stdc++.h>
using namespace std;
    int i,j,b,co[105],ro[105],y,x,z,k;
int main()
{

    bool arr[105][105];
    while(scanf("%d",&b)!=EOF){
            if(b==0) break;
            for(i=0;i<b;i++){
                co[i]=0;
                ro[i]=0;
            }
            y=0;
            k=0;
        for(i=0;i<b;i++){
            for(j=0;j<b;j++){
               scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<b;i++){
            for(j=0;j<b;j++){
                ro[i]=ro[i]+arr[i][j];
                   co[i]=co[i]+arr[j][i];
            }
            if(ro[i]%2==1){
                y++;
                x=i;
            }
            if(co[i]%2==1){
                k++;
                z=i;
            }
        }
        if(y==0 && k==0){
            printf("OK\n");
            y=0;
            k=0;
        }
        else if(y==1 && k==1){
            printf("Change bit (%d,%d)\n",x+1,z+1);
            y=0;
            k=0;
        }
        else{
            printf("Corrupt\n");
            y=0;
            k=0;
        }

    }
    return 0;
}
