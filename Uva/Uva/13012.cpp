#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,i;
  while(scanf("%d",&a)!=EOF){
    c=0;
    for(i=0;i<5;i++){
        scanf("%d",&b);
        if(b==a)c++;
    }
    cout<<c<<endl;


  }

    return 0;


}
