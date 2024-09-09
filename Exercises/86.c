/*

 	Example:  Make a program that reads a sentence and prints it backwards. 
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
	char a[100], b[100];
	int i, j;
	
	scanf("%[^\n]", a);
	
	for(i = strlen(a) - 1, j = 0 ; i >= 0 ; i--, j++)
	{
		b[j] = a[i];
		printf("%c", b[j]);
	}

	return 0;
}
