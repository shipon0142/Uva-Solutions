#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,i,k,c;
int main()
{
    set<ll>myvec;
    //set<ll>myvec2;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        if(a==0 && b==0) break;
for(i=0;i<a;i++){
    scanf("%lld",&k);
    myvec.insert(k);
}
c=0;
for(i=0;i<b;i++){
    scanf("%lld",&k);
    if(myvec.find(k)!=myvec.end())c++;
}
  cout<<c<<endl;
  myvec.clear();
    }
  return 0;
}
