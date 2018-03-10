#include <bits/stdc++.h>
using namespace std;
int arr[500006],i,j,l;
void calculate(){
 arr[1]=1;
 arr[2]=2;
 l=0;
 for(i=3;i<500005;i++){
        l=l+2;
    arr[i]=l;
    if(i==l){
        l=0;
    }
 }
}
int main()
{
calculate();
   while(scanf("%d",&l)==1 && l){
    cout<<arr[l]<<endl;
   }
 return 0;
}
