#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll val,v,i,arr[100000000],c,x,j,k;
ll gcd(ll a, ll b){
   if(b==0) return a;
   return gcd(b,a%b);
}
int main()
{

 while(scanf("%lld",&val)!=EOF){
        if(val==0) break;
        c=0;
    for(i=1;i<=sqrt(val);i++){
           if(val%i) continue;
               arr[c]=i;
               c++;
               if(i==val/i)continue;
               arr[c]=val/i;
               c++;



    }
    x=c;
    for(i=1;i<x-1;i++){
            if(arr[i]==val) continue;
            for(j=i+1;j<x;j++){
              k=(arr[i]*arr[j])/gcd(arr[i],arr[j]);
              if(k==val){

                   // printf("%lld %lld\n",arr[i],arr[j]);
                    c++;
              }




            }




    }
    printf("%lld %lld\n",val,c);




 }

  return 0;








}
