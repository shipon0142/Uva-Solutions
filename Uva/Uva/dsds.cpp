#include <bits/stdc++.h>
int arr[1000000],i;
void func(){
arr[1]=1;
arr[2]=1;
for(i=3;i<=100000;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
}
int main()
{
 func();

   int a;
   while(scanf("%d",&a)!=EOF){
    printf("%d\n",arr[a]);
   }







 return 0;



}
