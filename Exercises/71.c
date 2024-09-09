/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a number prime, store it in a 10-position vector. Once the tenth prime number is stored, 
 	close the reading and print, in a single line, the elements of the vector separated from 
 	each other by a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int a[MAX], i, j, k, prime, control;

	i = 0;
	
	while(i < MAX)
	{
        	k = 1;
        	scanf("%d", &prime);
        	for(j = 2; j < prime; j++)
        	{
        		control = prime % j; 
        		if(control == 0)
        	        {
        			k = 0;
        	        	break;
           		}
        	}
       		if(k == 1 && prime != 1)
        	{
       			a[i] = prime;
            		i++; 
        	}
    	}
	
	for(i = 0; i < MAX; i++)
	{
	    printf("%d ", a[i]);
	}
	
    return 0;
}
