         /*SOLUTION*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,arr[100000],j,m,arr1[100000],l,k,x,z;
    char str[100000];
     while(gets(str)){
            l=strlen(str);
        for(j=0;j<26;j++){
                arr[j]=0;
                for(m=0;m<l;m++){
                    if(str[m]==(j+65)){
                        arr[j]++;
                    }
                }
     }
     for(j=26;j<52;j++){
                arr1[j]=0;
                for(m=0;m<l;m++){
                    if(str[m]==(j+71)){
                        arr1[j]++;
                    }
                }
          }
     k=arr[0];
     for(j=1;j<26;j++){
            if(arr[j]>k)  k=arr[j];
        }
        x=arr1[26];
        for(j=27;j<52;j++){
           if(arr1[j]>x)  x=arr1[j];
                   }
           if(x>k) z=x;
           if(x<k) z=k;
           if(x==k) z=k;
           for(j=0;j<26;j++){
           if(arr[j]==z)
                printf("%c",j+65);
           }
        for(j=26;j<52;j++){
            if(arr1[j]==z)
                printf("%c",j+71);
        }
        printf(" %d\n",z);
     }
     return 0;
}
