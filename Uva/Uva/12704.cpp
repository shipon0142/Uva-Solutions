#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    float b,c,d,e;
    scanf("%d",&a);
    while(a--){
        scanf("%f %f %f",&b,&c,&d);
        e=sqrt((b*b)+(c*c));
        printf("%0.2f %0.2f\n",d-e,d+e);
    }
  return 0;
}
