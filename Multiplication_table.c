#include <stdio.h>
#include <stdlib.h>
int main ( )
{
    int i,n;
    long int m;
    printf("\n\t\t\tmultiplication table:\n\n");
    printf("\r______________________________________________________________________\n\n");
    for(n=1;n<=10;n++)
    {
        for(i=1;i<10;i++)
        {
            m=i*n;
            printf("%d*%d=%ld\t",i,n,m);   
    
   }
           if(i==9)
    {
              printf("\n");
}

else
{
              printf("");
}
        }
            printf("\r______________________________________________________________________");
    return 0;
}
