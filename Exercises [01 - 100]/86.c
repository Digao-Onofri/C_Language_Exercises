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
	char a[100];
	int i;
	
	scanf("%[^\n]", a);
	
	for(i = strlen(a) - 1; i >= 0 ; i--){
		printf("%c", a[i]);
	}

	return 0;
}
