#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,arr[100],c,d,e,i,arr1[100],j,x,y,z,ans[100],k,l,m,o,p;
    while(scanf("%d %d",&a,&b)!=EOF){
            i=90;
            j=90;
        while(i!=10){
            c=a/2;
            arr[i]=a%2;
            if(c==0){
              break;
            }
            a=c;
            i--;
        }
        while(j!=10){
            c=b/2;
            arr1[j]=b%2;
            if(c==0){
                break;
            }
            b=c;
            j--;
        }
        if(i>j){
                for(y=j;y<i;y++){
                    arr[y]=0;
                }
                z=j;
        }
        else if(i<j){
                for(y=i;y<j;y++){
                    arr1[y]=0;
                }
                z=i;
        }
        else z=i;
        for(i=z;i<=90;i++){
           k = arr[i]+arr1[i];
           if(k==2){
            ans[i]=0;
           }
           else{
            ans[i]=k;
           }
        }
        p=0;
        o=1;
        m=90-z;
               l=0;
            for(i=z;i<=90;i++){
                    if(l==0 && ans[i]==1){
                        l=1;
                    }
                    if(l==1){
                            for(j=1;j<=m;j++){
                               o=o*2;
                            }
                        p=p+(o*ans[i]);
                        o=1;
                }
                    m--;
        }
        printf("%d\n",p);
    }
    return 0;

}
