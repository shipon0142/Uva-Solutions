#include <bits/stdc++.h>
using namespace std;
long long b,c,d;
long long a,arr[300],e,f,g,h,i,k,x;
void prime(){

    for(b=2;b<=sqrt(100);b++){
        if(!arr[b])
        for(c=b+b;c<=100;c+=b){
            arr[c]=1;
        }
    }
    return ;
}
long long pow(long long x){
f=1;
 for(e=1;e<=x;e++){
    f=f*2;
 }
 return f;
}
int main()
{

     prime();
    while(scanf("%lld",&d)!=EOF){
            if(d==0) break;
        if(arr[d]==0 && d!=11 && d!=23 && d!=29){
                g=pow(d-1);
            h=g*(2*g-1);
            printf("Perfect: %lld!\n",h);
        }
       else if(!arr[d])
        {
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else{
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}
