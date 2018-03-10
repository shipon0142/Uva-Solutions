#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,co;
    while(scanf("%lld",&a)!=EOF){
            if(a==0)break;
          i=sqrt(a);
      if(i*i==a)
         cout<<"yes"<<endl;
      else
         cout<<"no"<<endl;
   }
   return 0;
}
