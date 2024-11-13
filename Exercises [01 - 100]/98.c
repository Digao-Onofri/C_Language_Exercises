/*

 	Example:  Make a program that takes a sentence and converts the first letter of each word to 
 	uppercase. 
 	Youtube lesson: https://youtu.be/BVf-jAZ-KuQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[100];
	int i;
	
	printf("Enter a sentence:\n");
	scanf("%[^\n]", string);
	
	string[0] = toupper(string[0]);
	
	for(i = 0; i < strlen(string); i++){
		if(string[i] == ' '){
			string[i + 1] = toupper(string[i + 1]);
		}
	}
	
	printf("%s\n", string);
	
	return 0;
}
