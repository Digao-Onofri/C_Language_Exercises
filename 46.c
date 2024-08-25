/*

 	Example:  Make a program that reads an unknown number of integer values and shows your 
 	average, with 1 decimal. The program should stop reading when a negative value is entered. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int a, i;
	float answer, sum;
	
	sum = 0;
	i = 0;
	
	printf("Enter an integer:\n");
	
	do {	
		scanf("%d", &a); 
		if(a > 0){
			sum = sum + a;
	    		i++;
		}
	}while(a > 0);
	
	answer = sum / (int) i;
	printf("The average of %d integers is: %.1f\n", i, answer);

	return 0;
}
