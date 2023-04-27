#include<stdio.h>

main()
{
    int i,j,n;
   
    char c='A';
    //printf("Enter the no of lines\n");
    //scanf("%d",&n);
 
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
 
        printf("\n");
    }
}
