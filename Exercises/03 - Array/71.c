/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a prime number, store it in a 10-position array. Once the tenth prime number is stored, 
 	close the reading and print, in a single line, the elements of the array separated from 
 	each other by a single space. 
 	Youtube lesson: https://youtu.be/bzh_MFlR3ys
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX], i = 0, j, prime, control;
	
	while(i < MAX){
        	control = 1;
        	scanf("%d", &prime);
        	for(j = 2; j < prime; j++){
        		if(prime % j == 0){ //thats not a prime number
        			control = 0;
        	        	break;
           		}
        	}
       		if(control == 1 && prime != 1){
       			a[i] = prime;
            		i++; 
        	}
    	}
    	
    	printf("The prime numbers that you type are: \n");
	
	for(i = 0; i < MAX; i++){
	    printf("%d ", a[i]);
	}
	
    return 0;
}
