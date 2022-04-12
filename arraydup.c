// Online C compiler to run C program online
#include <stdio.h>  
int delete_duplicate(int array[], int n)  
{  
 int ret;  
// Please add your code Here  

if(n==0||n==1)
return  n;
int temp[n];
int i;
int j=0;
for(i=0;i<n-1;i++)
{
if(array[i]!=array[i+1])
temp[j++]=array[i];
 temp[j++]=array[n-1];
}
#temp[j++]=array[n-1];
for(i=0;i<j;i++)
{
array[i]=temp[i];
}
 return j;
}  
int main()  
{  
 int n;  
 printf("\n Enter the array size ");  
 scanf("%d", &n);  
 int array[n];  
 int i;  
 printf("\n Enter the array values ");  
 for (i = 0; i < n; i++)  
 {  
 scanf("%d", &array[i]);  
 }  
 printf("\nArray value before removing duplicate ");  
 // Please add your code Here  
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
 n = delete_duplicate(array, n); 
 //print the array without duplicates  
 // Please add your code Here 
printf("\nArray after removing duplicates:");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
} 
 return 0;  
}
