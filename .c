// Online C compiler to run C program online
#include <stdio.h>

int maim()
{ 
     int a[2][2],b[2][2], c[2][2], i, j, k;
     printf(" enter firt matrix");
     for( i=0; i<2; i++)
     {
          for(j=0; j<2; j++)
           scanf("%d", &a[i][j]);
         
     }
     printf(" enter 2nd matrix");
     for( i=0; i<2; i++)
     {
          for(j=0; j<2; j++)
           scanf("%d", &b[i][j]);
     }
	  for(i=0; i<2; i++)
     {
         for(j=0; j<2; j++)
     {
          c[i][j]=0; 
          for(k=0; k<2; k++)
          c[i][j]= c[i][k]+ a[i][k]*b[k][j];
          
     }
 }
     
printf(" the multiplication of matrix is");
    for( i=0; i<2; i++)
     {
          for(j=0; j<2; j++)
           printf("%d", c[i][j]);
    
     }
         
}
