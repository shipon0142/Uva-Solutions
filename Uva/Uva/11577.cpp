#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,arr[100],j,m,l,k;
    char str[1000];
    scanf("%d",&i);
    getchar();
     while(i--){
            gets(str);
            l=strlen(str);


        for(j=0;j<26;j++){
                arr[j]=0;
                for(m=0;m<l;m++){
                    if(str[m]==(j+65) || str[m]==(j+97)){
                           // printf("%c\n",str[m]);
                        arr[j]++;
                    }
                }
     }
     k=arr[0];
     for(j=0;j<26;j++){
            if(arr[j]>k)  k=arr[j];
        }
        for(j=0;j<26;j++){
            if(arr[j]==k){
              printf("%c",j+97);
            }
        }
        printf("\n");

     }
     return 0;
}
