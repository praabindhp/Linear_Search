#include<stdio.h> 
void  main() 
{ 
   int array[100],search,c,n; 
printf("Enter No.of Elements\n"); 
 scanf("%d",&n); 
printf("Enter Elements\n"); 
for (c=0; c<n;c++) 
   scanf("%d", &array[c]); 
printf("Enter Number To Search\n"); 
   scanf("%d", &search); 
 for(c=0;c<n;c++) 
{ 
if(array[c] == search)      
      { 
         printf("%d is present at location %d.\n",search,c+1); 
         break;      
      } 
} 
   if(c==n) 
{ 
      printf("%d is not present in array.\n",search); 
} 
 //return 0; 
} 