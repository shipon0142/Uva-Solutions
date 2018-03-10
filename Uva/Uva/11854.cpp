#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
    long long a,b,c,d,e,f;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF){
            if(a==0 && b==0 && c==0) break;
            d=a*a;
              e=b*b;
              f=c*c;
        if((d+e)==f){
    cout<<"right"<<endl;
        }
    else if((d+f)==e){
      cout<<"right"<<endl;
        }
        else if((f+e)==d){
    cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }

    }
    return 0;
}
