#include<stdio.h>

main()

{
     int i,j,n;
 
    //printf("\n Enter the value of n:");
    //scanf("%d",&n);
    for(i=2;i<=6;i++)
   {
        for(j=1;j<i;j++)
        {
            if((i+j)%2==0)
           {
               printf("| ");
           }
          else
          {
              printf("- ");
          }
          
       }
          printf("\n");
   }


}