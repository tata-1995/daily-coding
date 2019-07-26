/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5}, brr[5],n=5;
     for(int i=0;i<n;i++){
         int temp=arr[i],res = 1;
        for(int j=0;j<n;j++) {
            arr[i] = 1;
            res= res*arr[j];
        }
        brr[i]= res;
        arr[i]=temp;
       printf("%d\n",brr[i]);
     }
    return 0;
}
