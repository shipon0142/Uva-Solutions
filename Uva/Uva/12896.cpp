#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[10][4]={'.',',','?','"','a','b','c','%','d','e','f','%','g','h','i','%','j','k','l','%','m','n','o','%','p','q','r','s','t','u','v','%','w','x','y','z'};

    int t,a,i,arr[1005];
      scanf("%d",&t);
      while(t--){
           // printf("%c\n",str[8][1]);
         scanf("%d",&a);
        for(i=0;i<2*a;i++){
             scanf("%d",&arr[i]);
        }
        for(i=0;i<a;i++){
                if(arr[i]==0)
                printf(" ");
        else
                printf("%c",str[arr[i]-1][arr[i+a]-1]);
        }
   printf("\n");
      }
      return 0;




}
