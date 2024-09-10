/*

 	Example:  Make a Boolean function (returns 0 = no, or 1 = yes) that takes an integer value N 
 	and returns whether that number is prime or not. In Moodle, enter only your function (no 
 	main, no includes), which should have the following signature: int primo(int n). Moodle will 
 	invoke your function inside a printf to check for correctness. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

void booleana(int prime);

int main()
{
	int prime;
	
	scanf("%d", &prime);
      
      	booleana(prime);
	
	return 0;
}
void booleana (int prime) {
	int j, k;
	
	k = 1;	
       	for(j = 2; j < prime; j++) {  
        	if(prime % j == 0) {
        		k = 0;
        	       	break;
           	}
        }
       	if(k == 1) {
       		printf("1");
	}
	else {
		printf("0");
	}
	
}
