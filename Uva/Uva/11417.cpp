#include <bits/stdc++.h>
using namespace std;
int G,N,i,j;
int GCD ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a;
     a = b%a;
      b = c;
  }
  return b;
}
int main()
{
    while(scanf("%d",&N)!=EOF){
            if(N==0) break;
    G=0;
     for(i=1;i<N;i++)
   for(j=i+1;j<=N;j++)
   {
   G+=GCD(i,j);
    }
    printf("%d\n",G);
    }
    return 0;


}
