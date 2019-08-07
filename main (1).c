/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h> 
int findMissingPositive(int arr[], int size) 
{ 
int i; 
for(i = 0; i < size; i++) 
{ 
    if(abs(arr[i]) - 1 < size && arr[ abs(arr[i]) - 1] > 0) 
    arr[ abs(arr[i]) - 1] = -arr[ abs(arr[i]) - 1]; 
} 
  
for(i = 0; i < size; i++) 
    if (arr[i] > 0) 
    return i+1;  
  
return size+1; 
} 
int main()
{
    int arr[6] = {0,1,4,-2,2,-2};
    int size = 6;
    for(int i=0; i<size;i++) {
        if(arr[i]<0){
            arr[i] = 0;
        }
    }
    int missing = findMissingPositive(arr,size);
    printf("%d", missing);
    return 0;
}
