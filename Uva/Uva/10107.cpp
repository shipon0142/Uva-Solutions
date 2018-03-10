#include <bits/stdc++.h>
using namespace std;
int main(){
        long long a,b,c=0,arr[100000];
        while(scanf("%lld",&a)!=EOF){
            arr[c]=a;
            c++;
            sort(arr,arr+c);
            if(c%2==1)
                printf("%lld\n",arr[c/2]);
                else
                    printf("%lld\n",((arr[c/2]+arr[c/2-1])/2));
        }
        return 0;

}
