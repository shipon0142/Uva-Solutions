#include <bits/stdc++.h>
using namespace std;
int arr[32780],arr1[1001];
int arr2[1001],arr3[1001];
int i,j,co,c;
void prime(){
    arr[0]=1;
    arr[1]=1;
   for(i=3;i<=sqrt(32776);i+=2){
        if(!arr[i])
    for(j=i*2;j<=32776;j=j+i){
            arr[j]=1;
    }
   }



}
int main()
{
    int h,m;
    prime();
    while(scanf("%d",&h)!=EOF){
        if(h==4){
            printf("1\n");
            continue;
        }
            if(h==0) break;
            co=0;
            c=h/2;
    if(c%2==0)c--;
    for(i=c;i>=3;i-=2){
        if(!arr[i] && !arr[h-i] && (h-i)%2!=0){
            co++;
            //printf("%d\n",i);
        }
    }
    if(!arr[h-2] && (h-2)%2==1){
        co++;
    }
    printf("%d\n",co);

    }
    return 0;
}
