#include <bits/stdc++.h>
using namespace std;
int main()
{
      char str[1000];
      int i,a=34,b;
      while(gets(str)){
            if(strlen(str)==1 && str[0]=='0') break;
            b=0;
        for(i=0;str[i]!='\0';i++){
            b=b*10+str[i]-'0';

            if(b>=a){
                b=b%a;
            }



        }
        if(b%a){
            cout<<0<<endl;
        }
        else
            cout<<1<<endl;
      }

 return 0;
}
