
#include <stdio.h>

int main()
{
   int n,i,j;
   printf("enter an table number=");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
       j=i*n;
       printf("\n%d*%d=%d",j,i,n);
   }
return 0;
}

