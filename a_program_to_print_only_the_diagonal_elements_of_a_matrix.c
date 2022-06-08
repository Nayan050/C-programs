// Write a program to print only the diagonal elements of a matrix.

#include<stdio.h>
#include<conio.h>
 int main()
  {
   int a[5][5],r,c,i,j,sum=0;
   printf("Enter a number of rows and columns:-");
   scanf("%d%d",&r,&c);
   printf("\nEnter %d*%d elements in matrix:-\n",r,c);
   for(i=0;i<r;i++)
     {
      for(j=0;j<c;j++)
       scanf("%d",&a[i][j]);
     }
    printf("The diagonal elements is");
    for(i=0;i<c;i++) 
      printf("%3d",a[i][i]);
  getch();
}