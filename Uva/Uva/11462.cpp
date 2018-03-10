#include <bits/stdc++.h>
using namespace std;
 long long a,i,m,arr[2000005],j,temp;
int main()
{

  //  ma=2000005;

    while(scanf("%lld",&a)!=EOF){
            if(a==0) break;
        for(i=0;i<a;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+a);

        for(j=0;j<a-1;j++){
           printf("%lld ",arr[j]);
        }
        printf("%lld",arr[a-1]);
        cout<<endl;

    }
    return 0;

}
