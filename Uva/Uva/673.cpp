#include <bits/stdc++.h>
using namespace std;
int main(){
 char str[100];
 int t,i,l,j,k;
 cin>>t;
 getchar();
 while(t--){

    gets(str);
    l=strlen(str);
    if(l%2){
            printf("No\n");
    continue;

    }
      for(i=1;i<l;i++){
        for(j=i-1;j>=0;j--){
                if(str[j]=='0')continue;
            else if(str[i]==str[j]+2 || str[i]==str[j]+1){
                str[i]='0';
                str[j]='0';
            }
            else break;
        }
      }
      k=0;
      for(i=0;i<l;i++){
        if(str[i]!='0')k=1;
      }

      if(k==1){
        printf("No\n");
      }
      else
        printf("Yes\n");

 }
 return 0;


}
