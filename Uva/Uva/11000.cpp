#include <bits/stdc++.h>
using namespace std;
long long arr[100000],i,j,a,sum=1;
long long  fibo(){
    arr[0]=0;
    arr[1]=1;
   for(i=2;i<101;i++){
    arr[i]=sum+arr[i-1]+arr[i-2];
   }
   //cout<<arr[100]<<endl;





}
int main()
{
 fibo();
  while (scanf("%lld",&a)!=EOF){
          if(a==-1)  break;

    printf("%lld %lld\n",arr[a],arr[a+1]);






  }
  return 0;












}
