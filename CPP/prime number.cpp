#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(x=2;x<=n;x++)
    {int c=0;
      for(i=2;i<=x;i++){if(x%i==0){c++ ;}}

      if(c==1)
      {
        printf("%d ",x);
      }

    }
    return 0;
}
