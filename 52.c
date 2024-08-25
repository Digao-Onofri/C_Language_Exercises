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
	int n, i, x, flag;
	float sum, den;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	x = 1;
	flag = 1;
	den = 1;
	sum = 0;
	
	for (i = 1; x <= n; i += 2, x++){
        	sum = sum +  (flag * (i / den) );
        	den++;
       		if(x % 2 == 0){
      			flag = -flag;
		}
	}
	
 	printf("The sum of the sequence is: %.2f\n", sum);

	return 0;
}
