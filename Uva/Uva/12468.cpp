#include <bits/stdc++.h>
using namespace std;
int main(){
 int a,b,c;
 while(scanf("%d %d",&a,&b)!=EOF){
        if(a==-1 && b==-1)break;
    c=abs(a-b);
    if(c>50)cout<<100-c<<endl;
    else cout<<abs(a-b)<<endl;
 }
 return 0;



}
