/*

 	Example:  Make a program that reads a sentence and prints it backwards. 
 	Youtube lesson: https://youtu.be/hA6ksqKXdRo
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
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
