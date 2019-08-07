
#include <stdio.h>
#include <string.h> 

int king(char *num, int n) 
{ 
    if (n == 0 || n == 1) 
        return 1; 
  
    int count = 0;  

    if (num[n-1] > '0') 
        count =  king(num, n-1); 
  
    if (num[n-2] == '1' || (num[n-2] == '2' && num[n-1] < '7') ) 
        count +=  king(num, n-2); 
  
    return count; 
} 
  
int main() 
{ 
    char num[] = "111"; 
    int n = strlen(num); 
    printf( "Count is %d", king(num, n)); 
    return 0; 
} 