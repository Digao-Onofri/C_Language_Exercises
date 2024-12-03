/*

 	Example:  Make a Boolean function (returns 0 = no, or 1 = yes) that takes an integer value N 
 	and returns whether that number is prime or not. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

void boolean(int prime);

int main(){
	int prime;
	
	printf("Enter a number:\n");
	scanf("%d", &prime);
      
	boolean(prime);
	
	return 0;
}
void boolean (int prime) {
	int j, control;
	
	control = 1;	
    for(j = 2; j < prime; j++) {  
        if(prime % j == 0) {
        	control = 0;
        	break;
        }
    }
    if(control == 1) {
       	printf("1\n");
	}
	else {
		printf("0\n");
	}
}
