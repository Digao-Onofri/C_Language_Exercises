/*

 	Example:  Make a program that reads a sentence and copies it to another array, removing the 
 	blanks. Print the second array. 
 	Youtube lesson: https://youtu.be/WPTvmkZarMQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i, j;

	scanf("%[^\n]", a);
	
	for(i = 0, j = 0; i < strlen(a); i++){
		if(a[i] != ' '){
			b[j] = a[i];
			j++;
		}
	}

	for(j = 0; j < strlen(b); j++){
		printf("%c", b[j]);
	}
	
	return 0;
}
