#include <stdio.h>

void main()
{ 
    int i,n,dummy;
    printf("Enter the value n\n");
    sacnf("%d",&n);
    dummy=1;
    for(i=2;i<n;i++)
    {  
       if(i%n==0)
       {
           dummy=0;
           break;
       }
    }
    if (dummy==1)
       printf("Prime number");
    elso 
       printf(" Not a Prime number");
}

