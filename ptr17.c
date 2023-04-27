#include<stdio.h>

main()

{
     int i,j,n;
 
    //printf("\n Enter the value of n:");
    //scanf("%d",&n);
    for(i=2;i<=6;i++)
   {
        for(j=i;j>1;j--)
        {
            if(((i+j)%2==0))
           {
               printf("1 ");
           }
          else
          {
              printf("0 ");
          }
          
       }
          printf("\n");
   }


}