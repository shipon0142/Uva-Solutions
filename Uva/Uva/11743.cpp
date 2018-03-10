#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,t,ab,abc,w,x,y,z,sum;
int credit(int ab){
    abc=ab;
        ab=(abc/1000)*2;
        if(ab>9){
            ab=(ab/10 + ab%10);
        }
        sum=sum+ab;
        abc=abc%1000;
        sum=sum+(abc/100);
        abc=abc%100;
        ab=(abc/10)*2;
        if(ab>9){
            ab=(ab/10 +ab%10);
        }
        sum=sum+ab;
        sum=sum+(abc%10);
        return sum;



}
int main()
{
    scanf("%d",&t);
    while(t--){

        scanf("%d %d %d %d",&a,&b,&c,&d);
         sum=0;
        w=credit(a);
        sum=0;
        x=credit(b);
        sum=0;
        y=credit(c);
        sum=0;
        z=credit(d);
        if((w+x+y+z)%10!=0){
            printf("Invalid\n");
        }
        else
            printf("Valid\n");





    }
    return 0;


}
