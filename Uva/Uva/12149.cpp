#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,sum;
    while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
        sum=0;
        for(i=1;i<=a;i++){
            sum=sum+(i*i);
        }
        cout<<sum<<endl;




    }
    return 0;
}
