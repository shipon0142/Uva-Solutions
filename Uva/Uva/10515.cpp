#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

char a[20000],b[20000];
int l1,l2,num,num1,i;
while(scanf("%s",&a)!=EOF){
        scanf("%s",&b);
       // if(a==0 && b==0)break;

  //cout<<big_mod(a,b,10)<<endl;
l1=strlen(a);
l2=strlen(b);
num1=0;
for(i=0;i<l2;i++){
    num1=(num1*10) +(b[i]-'0');
    if(num1>=4)num1=num1%4;
}
if(l1==1 && l2==1){
    if(a[0]=='0' && b[0]=='0') break;
}
num=a[l1-1]-'0';
//num1=b[l2-1]-'0';
if(num==0 || num==1 || num==5|| num==6){
    printf("%d\n",num);
}
else if(num==4){
    if(num1%2){
        printf("4\n");
    }
    else
        printf("6\n");
}
else if(num==9){

    if(num1%2){
        printf("9\n");
    }
    else
        printf("1\n");
}
else if(num==3){
     //   num1=0;
    //if (l2>1) num1=(num1*10)+(b[l2-2]-'0');
  //  num1=(num1*10)+(b[l2-1]-'0');
//num1=num1%4;
    if(num1==1){
        printf("3\n");
    }
    else if(num1==2){
        printf("9\n");
    }
    else if(num1==3){
        printf("7\n");
    }
    else if(num1==0){
        printf("1\n");
    }
}
else if(num==2){
     //   num1=0;
  // if (l2>1) num1=(num1*10)+(b[l2-2]-'0');
  //  num1=(num1*10)+(b[l2-1]-'0');
//num1=num1%4;
    if(num1==1){
        printf("2\n");
    }
    else if(num1==2){
        printf("4\n");
    }
    else if(num1==3){
        printf("8\n");
    }
    else if(num1==0){
        printf("6\n");
    }
}
else if(num==7){
       // num1=0;
    //if(l2>1)num1=(num1*10)+(b[l2-2]-'0');
   // num1=(num1*10)+(b[l2-1]-'0');
//num1=num1%4;
    if(num1==1){
        printf("7\n");
    }
    else if(num1==2){
        printf("9\n");
    }
    else if(num1==3){
        printf("3\n");
    }
    else if(num1==0){
        printf("1\n");
    }
}
else if(num==8){
     //   num1=0;
 // if (l2>1)  num1=(num1*10)+(b[l2-2]-'0');
   // num1=(num1*10)+(b[l2-1]-'0');
//num1=num1%4;
    if(num1==1){
        printf("8\n");
    }
    else if(num1==2){
        printf("4\n");
    }
    else if(num1==3){
        printf("2\n");
    }
    else if(num1==0){
        printf("6\n");
    }
}

}
return 0;
}
