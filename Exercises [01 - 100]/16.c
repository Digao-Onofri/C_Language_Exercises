/*

 	Example: With only two variables, make a program that read three values and calculates their
 	average.
 	Youtube lesson: https://youtu.be/tjSaMHbafJE
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int v1, v2;
	
	printf("Enter three values: \n");
	scanf("%d %d", &v1, &v2);
	
	v1 = v1 + v2;
	
	scanf("%d", &v2);
	
	v1 = v1 + v2;
	
	printf("Their average will be: %.2f\n", v1 / 3.0);

	return 0;
}
