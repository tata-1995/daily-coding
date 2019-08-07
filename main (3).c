/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h> 
  
int water(int arr[], int n) 
{ 
  int sum = arr[0]; 
  int sum1 = 0; 
  int sum2; 
  int i; 
  
  for (i = 1; i < n; i++) 
  { 
      if(sum>sum1){
          sum2=sum;
      }
      else {
          sum2=sum1;
      }
     sum = sum1 + arr[i]; 
     sum1 = sum2; 
  } 
  
  if(sum>sum1) {
      return sum;
  }
  else {
      return sum1;
  }
} 
  
int main() 
{ 
  int arr[] = {2,4,6,2,5}; 
  int n = 5; 
  printf("%d", water(arr, n)); 
  return 0; 
} 