#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool arr1[1000002];
ll i,j,co=0,arr[1000002],a,num,s=1000001,c,arr2[1000006],d,l;
void sive(){
 for(i=3;i<=sqrt(s);i+=2){
    if(!arr1[i])
    for(j=3*i;j<=s;j+=2*i){
        arr1[j]=1;
    }
 }
 c=1;
 arr[c++]=2;
 for(i=3;i<=s;i+=2){
    if(!arr1[i]){
        arr[c++]=i;
    }

 }
 co=0;
 for(i=2;i<=1000001;i++){
        l=0;
        if((i%2==1 && !arr1[i]) || i==2)arr2[i]=++co;
        else{
                d=i;
            for(j=1;j<=c;j++){
               while(d%arr[j]==0){
                d=d/arr[j];
                co++;
                if((!arr1[d] && d%2==1) || d==2){
                    co++;
                    l=1;
                }
                if(d==1 || l==1)break;
               }
                if(d==1 || l==1)break;
            }
            arr2[i]=co;
            l=0;
        }
 }
}

int main(){
     sive();

 while(scanf("%lld",&a)!=EOF){
    cout<<arr2[a]<<endl;
 }
 return 0;
}
