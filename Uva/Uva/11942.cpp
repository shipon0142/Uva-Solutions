#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,j=0,b[11],k,l,m;
    scanf("%d",&a);
    printf("Lumberjacks:\n");
    while(j<a){
            l=0;
                    m=0;

        for(i=0;i<10;i++){
              scanf("%d",&b[i]);
        }
        for(i=0;i<9;i++){

                  if(b[i]>b[i+1]) l++;
                  if(b[i]<b[i+1]) m++;

        }
        if(l==9 || m==9){
                printf("Ordered\n");
        }
        else{
            printf("Unordered\n");

        }



       j++;


    }
    return 0;
}
