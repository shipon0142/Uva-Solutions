#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long i,a,b,j,d,e,temp,y,cou,l,k;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            d=a;
            e=b;
            if(d>e){
                temp=d;
                d=e;
                e=temp;
            }
            cou=0;
            k=0;
        while(d<=e){
                y=d;
            while(y!=1){
                    if(y==1){
                        cou++;
                        break;
                    }
                if(y%2==0){
                    y=y/2;
                    cou++;
                }
                else{
                        cou++;
                    y=(3*y)+1;
                }
            }
            if(cou+1>k){
                    k=cou+1;
            }
            cou=0;

          d++;
        }
        cout<<a<<" "<<b<<" "<<k<<endl;
    }
    return 0;
}
