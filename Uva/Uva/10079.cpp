#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld",&a)!=EOF){
            if(a<0) break;
        b=(a)*(a+1);
        b=b/2 +1;
        cout<<b<<endl;
    }
    return 0;

}
