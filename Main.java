/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

public class Main 
{ 
    public static void main(String args[]) 
    { 
        int[] arr = { 1,2,3,4,5,6,7,8,9,0 }; 
        int k = 4; 
        func(arr, k); 
    }
    
    public static void func(int[] arr, int k) 
    { 
        boolean res = false;
        for (int i = 0; i < arr.length; i++) 
            for (int j = i + 1; j < arr.length; j++) 
                if ((arr[i] + arr[j]) == k) 
                    res = true; 
  
        System.out.println(res); 
    } 
} 

