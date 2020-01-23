#include<stdio.h>

void nFacRuntimeFunc(int n) {
  for(int i=0; i<n; i++) {
    printf("%d %d\n",i,n);
    nFacRuntimeFunc(n-1);
  }
}

int main()
{
    int n;
    scanf("%d",&n);
    nFacRuntimeFunc(n);

    return 0;
}


