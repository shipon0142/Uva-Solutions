#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a,i,b,x,y,z;
    z=0;
    while(scanf("%d",&a)!=EOF){
            if(a==0) break;
              x=0;
              y=0;
      for(i=0;i<a;i++){
          scanf("%d",&b);
          if(b==0)x++;
          else y++;
       }
       cout<<"Case "<<z+1<<": "<<y-x<<endl;
       z++;

    }
    return 0;
}
