// C program to find data type

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
# define MAX_INPUT 100
  
int main()
{
    
    char value[MAX_INPUT] = "";
  
   
    double temp;

    int n;
  

    char str[MAX_INPUT] = "";
  
   
    double val = 1e-12;
    printf("\n Enter the Value to know data type");   
    fgets(value, 100, stdin); // Read input
  
    // Check for integers.
    if (sscanf(value, "%lf", &temp) == 1) 
    {
        n = (int)temp; // typecast to int.
        if (fabs(temp - n) / temp > val) 
            printf("The input is a floating point\n");        
        else 
            printf("The input is an integer\n");        
    }
  
    // Check for string 
    else if (sscanf(value, "%s", str) == 1)     
        printf("The input is a string\n");
      
    else // No match.   
        printf("input not recognized\n");    
}
