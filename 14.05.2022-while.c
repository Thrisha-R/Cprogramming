#include <stdio.h>

void main()
{ 
    int a;
    a = 1;
    
    while(a<=5)
    {
      printf("%d",a%2);
      a=a+1;
    }
}

