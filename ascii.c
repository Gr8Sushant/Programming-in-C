#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int n,*p,i,j,temp;
   printf("Enter no of term:");
   scanf("%d",&n);
   printf("Enter %d no:\n",n);
   p=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
//      printf("%d:",i+1);
      scanf("%d",(p+i));
   }
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(*(p+i)>*(p+j))
         {
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
         }
      }
   }
   printf("After sorting:\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t",*(p+i));
   }
   getch();

}
