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
	int soma, x, y, z, w;
	
	scanf("%s %s %s %s", a, b, c, d);	
	
	x = atoi(a);
	y = atoi(b);
	z = atoi(c);
	w = atoi(d);
	soma = x + y + z + w;
	
	printf("%d", soma);

	return 0;
}
