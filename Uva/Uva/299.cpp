#include <bits/stdc++.h>
using namespace std;
int i,j,t,a,arr[100],temp,co;
int swap(int arr[],int b){
   co=0;
  for(i=1;i<=b-1;i++){
        for(j=i+1;j<=b;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                co++;
            }

        }
  }
  return co;
}
int main()
{
    int k;
  scanf("%d",&t);
  while(t--){

       scanf("%d",&a);
       for(i=1;i<=a;i++){
          scanf("%d",&arr[i]);
       }
      k= swap(arr,a);

   printf("Optimal train swapping takes %d swaps.\n",k);

  }
  return 0;
}
