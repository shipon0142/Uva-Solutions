#include <bits/stdc++.h>
using namespace std;
int main(){
int a,co,b,c=0;
while(scanf("%d",&a)!=EOF){
        if(a<0){
            break;
        }
   b=1;
        co=0;
    while(1){
            if(b>=a){
                break;
            }
         b=b*2;
         co++;
    }
    printf("Case %d: %d\n",c+1,co);


    c++;
}
  return 0;
}
