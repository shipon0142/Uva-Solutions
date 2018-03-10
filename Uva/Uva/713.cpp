#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,l1,l2,su,b,a,s,k;
    char str1[300],str2[300],ans[300];
    scanf("%d",&t);
    while(t--){
        scanf("%s %s",&str1,&str2);
        l1=strlen(str1);
        l2=strlen(str2);



        if(l2>l1){
                b=l2;
        a=l1;
        }
        else{
            b=l1;
        a=l2;
        }
        //cout<<a<<" "<<b<<endl;
        for(i=a;i<b;i++){
                if(l1<l2)str1[i]='0';
                if(l1>l2)str2[i]='0';

        }
        str1[i]='\0';
        str2[i]='\0';
        //puts(str1);
       // puts(str2);
         su=0;
        for(i=0;i<b;i++){
            s=su+str1[i]-'0'+str2[i]-'0';
           ans[i]=(s%10)+'0';
           su=s/10;
        }
        if(su!=0){
            ans[b]=su+'0';
            b++;
        }
        ans[b]='\0';
      k=0;
      for(i=0;ans[i]!='\0';i++){
            if(ans[i]!='0')k=1;
            if(k==1){
                printf("%c",ans[i]);
            }

      }
      printf("\n");











    }
 return 0;



}
