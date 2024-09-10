/*

 	Example:  Make a program that reads 4 integers in string format, computes the sum of the 
 	numbers read, converts the result to another string, and shows the string that contains the 
 	result. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[5], b[5], c[5], d[5], as[5]; 
	int x, y, z, w, soma;
	
	fgets(a, 5, stdin);
	fgets(b, 5, stdin);
	fgets(c, 5, stdin);
	fgets(d, 5, stdin);
	
	sscanf(a, "%d", &x);
	sscanf(b, "%d", &y);
	sscanf(c, "%d", &z);
	sscanf(d, "%d", &w);
	
	soma = x + y + z + w;
	
	sprintf(as, "%d", soma);
	
	printf("%s", as);
	
	return 0;
}	
