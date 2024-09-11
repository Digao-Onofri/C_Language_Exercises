/*

 	Example:  Make a program that reads 4 integers in string format, computes the sum of the 
 	numbers read, and shows the result obtained. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[3], b[3], c[3], d[3];
	int sum, integera, integerb, integerc, integerd;
	
	printf("Enter four integers:\n");
	scanf("%s %s %s %s", a, b, c, d);	
	
	integera = atoi(a);
	integerb = atoi(b);
	integerc = atoi(c);
	integerd = atoi(d);
	sum = integera + integerb + integerc + integerd;
	
	printf("The sum of the fourth values is: %d\n", sum);

	return 0;
}
