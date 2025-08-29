/*

 	Example:  Make a program that reads 10 real values and stores them in a array . Next, 
 	calculate, with 1 decimal place, the sampling standard deviation of the elements in the 
 	array, according to the following expression, where n is the Quantity of elements sample standard 	 
 	deviation = 1 / N * summatory (v[i] - average)^2 
 	Youtube lesson: https://youtu.be/aUCKqWBd7VA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
#define MAX 8
int main()
{
    int i;
    float array[MAX], average = 0, summatory = 0, Sample_Standard_Deviation;
    
    for(i = 0; i < MAX; i++){
        scanf("%f", &array[i]);
        average += array[i]; 
    }
    
    average = average / MAX;
    
    for(i = 0; i < MAX; i++){
        summatory += ( (array[i] - average) * (array[i] - average));
    }
    
    Sample_Standard_Deviation = sqrt(summatory / MAX); 
    /* If you want to calculate the standard deviation just include (summatory / MAX - 1) in the
    sqrt parenthesis */
    printf("The sample samples standard deviation is: %.1f\n", Sample_Standard_Deviation);
     
    printf("\n");
    
    return 0;
}
