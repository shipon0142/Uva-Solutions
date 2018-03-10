#include <bits/stdc++.h>
using namespace std;
 int i,j,l1,l2,k,c;
   int arr[1006][1006];
   char str1[1005],str2[1005];
int main()
{

int m;
   while(gets(str1)){
    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<=l1;i++)arr[0][i]=0;
    for(i=0;i<=l2;i++)arr[i][0]=0;
    c=0;
    for(i=1;i<=l2;i++){
            k=0;
        for(j=1;j<=l1;j++){
            if(str1[j-1]==str2[i-1]){
                arr[i][j]=arr[i-1][j-1]+1;
                k=1;
            }
            else{
                    if(arr[i-1][j]>arr[i][j-1])
                    arr[i][j]=arr[i-1][j];
                       else
                    arr[i][j]=arr[i][j-1];
            }
            c=arr[i][j];
        }
    }
     cout<<c<<endl;
   }
 return 0;
}
