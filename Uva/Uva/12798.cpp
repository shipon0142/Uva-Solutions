#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,i,j,arr[200][200],co,count;
  while(scanf("%d %d",&n,&m)!=EOF){
             count=0;
            for(i=0;i<n;i++){
                    co=0;
                 for(j=0;j<m;j++){
                    scanf("%d",&arr[i][j]);
                     if(arr[i][j]!=0)co++;
                 }
            if(co==m)count++;
            }
            cout<<count<<endl;
  }


    return 0;


}
