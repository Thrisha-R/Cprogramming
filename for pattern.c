#include <stdio.h>

int main()
{
    int i,n,j,v=1;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    for(i=1;i<=j;i++)
     { 
    printf("%d ",v);
    v++;
     }
    printf("\n");
    }
    
return 0;
    
}
