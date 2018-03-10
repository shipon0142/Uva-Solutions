#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    scanf("%d",&t);
    while(t--){
       scanf("%d",&a);
       a=(a*567)/9;
       a=(a+7492)*235;
       a=(a/47)-498;
       a=a%100;
       a=a/10;
       if(a<0) a=a*-1;
       cout<<a<<endl;
    }
 return 0;
}
