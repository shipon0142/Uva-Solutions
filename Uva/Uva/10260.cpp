#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,k=0;
    char a[100];
    while(gets(a)){
            for(i=0;a[i]!='\0';i++){
                if(a[i]=='B' || a[i]=='F' ||a[i]=='P' || a[i]=='V'){
                       if(k!=1){ cout<<"1"; k=1;}
                }
               else if(a[i]=='C' || a[i]=='G' ||a[i]=='J' || a[i]=='K'|| a[i]=='Q'|| a[i]=='S'|| a[i]=='X'|| a[i]=='Z'){
                        if(k!=2){ cout<<"2"; k=2;}
                }
              else  if(a[i]=='D' || a[i]=='T'){
                        if(k!=3){ cout<<"3"; k=3;}
                }
              else  if(a[i]=='L'){
                        if(k!=4){ cout<<"4"; k=4;}
                }
              else  if(a[i]=='M' || a[i]=='N'){
                        if(k!=5){ cout<<"5"; k=5;}
                }
               else if(a[i]=='R'){
                        if(k!=6){ cout<<"6"; k=6;}
               }
               else k=0;
            }
            k=0;
            cout<<endl;

    }
    return 0;

}
