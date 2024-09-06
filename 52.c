/*

 	Example:  Make a program that reads an N number and shows the sum of the first N terms of 
 	the following expression, accurate to two decimal places: S = + 1/1 + 3/2 – 5/3 – 7/4 + 9/5 
 	+ 11/6 – 13/7 – 15/8 + ... 
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
	int integer, i, control, signal;
	float sum, den;
	
	printf("Enter an integer:\n");
	scanf("%d", &integer);
	
	control = 1;
	signal = 1;
	den = 1;
	sum = 0;
	
	for (i = 1; control <= integer; i += 2, control++){
        	sum = sum + (signal * (i / den) );
        	den++;
       		if(control % 2 == 0){
      			signal *= -1;
		}
	}
	
 	printf("The sum of the sequence is: %.2f\n", sum);

	return 0;
}
