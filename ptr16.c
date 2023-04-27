#include<stdio.h>

main()

{
     int i,j,n;
 
    //printf("\n Enter the value of n:");
    //scanf("%d",&n);
    for(i=7;i>1;i--)
   {
        for(j=2;j<i;j++)
        {
            if((i+j)%2==0)
           {
               printf("0 ");
           }
          else
          {
              printf("1 ");
          }
          
       }
          printf("\n");
   }


}
