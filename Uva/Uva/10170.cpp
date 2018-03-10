#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,i,sum;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            sum=0;
         for(i=a;;i++){
            sum+=i;
           if(sum>=b)break;
         }
    cout<<i<<endl;
    }
 return 0;
}
