#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,i;
    double arr[1010],sum,ans,co;
    scanf("%d",&t);
    while(t--){
            co=0;
            sum=0;
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%lf",&arr[i]);
             sum = sum+arr[i];
        }
        sum=sum/a;
        for(i=0;i<a;i++){
                if(arr[i]>sum){
                    co++;
                }
        }

    ans=(co/a)*100;
    printf("%0.3lf%c\n",ans,37);

    }
    return 0;
}
