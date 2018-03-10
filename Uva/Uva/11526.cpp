#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,a,sum,c,co,d;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&a);
           if(a<=0){
            cout<<0<<endl;
            continue;
           }
        sum=0;
        c=sqrt(a);
        co=a;
        for(i=1;i<=c;i++){
                d=a/i;
            sum=sum+d;
           sum=sum+((co-d)*(i-1));
           co=d;








        }
        if(co>c)sum=sum+c;
        //10cout<<co<<endl;
      //  cout<<c<<endl;
        cout<<sum<<endl;




    }
  return 0;
}
