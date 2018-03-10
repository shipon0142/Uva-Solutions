#include <bits/stdc++.h>
using namespace std;
long long a,arr[500000],b,c,d,i,x,j,y,t,l;
void ret( long long num){
    y=num;
  num=num*num;
  b=10;
  while(1){
        if(num/b==0)break;
    c=num/b;
    d=num%b;
    if((c+d)==sqrt(num) && d>0){
        arr[i]=y;
        i++;

        break;
    }
    else{
        b*=10;
    }
  }
 return;
}
int main()
{
    scanf("%lld",&t);
 l=0;
 while(l<t){
        scanf("%lld %lld",&a,&x);
        printf("case #%lld\n",l+1);
        i=0;
    for(j=a;j<=x;j++){
        ret(j);
    }
    if(i==0){
        printf("no kaprekar numbers\n");
    }
    else{
        for(j=0;j<i;j++){
printf("%lld\n",arr[j]);
        }
    }
    if(l!=(t-1))printf("\n");


 l++;

 }
 return 0;
}
