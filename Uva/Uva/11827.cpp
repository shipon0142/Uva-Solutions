#include <bits/stdc++.h>
using namespace std;
int ma;
int gcd ( int a, int b )
{
  if ( b==0 ) return a;
  return gcd (b, a%b );
}
int ret(char str[]){
    int vel=0;
    int arr[1000],j=0;
    int l=strlen(str);
   for(int i=0;i<l;i++){
       if(str[i]!=' '){
             vel=(vel*10)+(str[i]-'0');
       }

        if(str[i]==' ' || i==l-1) {
             if(vel==0)continue;
          arr[j]=vel;
          j++;
          vel=0;
       }
   }
   //for(int u=0;u<j;u++){
    //cout<<arr[u]<<endl;
   //}
   ma=0;
   for(int k=0;k<j-1;k++){
     for(int m=k+1;m<j;m++){
            int h=arr[m];
              int j=arr[k];
              int o=gcd(h,j);
              //cout<<h<<" "<<j<<" "<<o<<endl;
            if(o>ma) ma=o;
        }
   }
   //cout<<ma<<endl;
  return ma;
}
int main()
{
          int  t;
          char str[1000000];
     scanf("%d",&t);
          getchar();
          while(t--){
           gets(str);
           int x=ret(str);
         cout<<x<<endl;

          }
 return 0;
}
