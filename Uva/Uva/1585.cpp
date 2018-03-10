#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum,j,k,l=0;
    string a;
     scanf("%d",&k);
    while(l<k){
            cin>>a;
            sum=0;
    j=1;
      for(i=0;a[i]!='\0';i++){
         if(a[i]=='O'){
            sum=sum+j;
            j++;
         }
         if(a[i]=='X'){

            j=1;
         }

      }
      printf("%d\n",sum);
      l++;

    }
    return 0;
}
