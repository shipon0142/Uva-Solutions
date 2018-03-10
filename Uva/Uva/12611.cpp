#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
 int t,b=0,r,w,l,l1,l2;
 scanf("%d",&t);
 while(b<t){
    scanf("%d",&r);
    l=r*5;
    w=(60*l)/200;
      l1=(45*l)/100;
      l2=(55*l)/100;
      printf("Case %d:\n",b+1);
      printf("%d %d\n",(-1)*l1,w);
      printf("%d %d\n",l2,w);
      printf("%d %d\n",l2,(-1*w));
      printf("%d %d\n",(-1)*l1,(-1)*w);


    b++;
 }



return 0;


}
