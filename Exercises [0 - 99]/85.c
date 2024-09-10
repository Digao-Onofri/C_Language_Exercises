/*

 	Example:  Make a program that reads a sentence and counts how many spaces there are in the 
 	sentence. 
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
	int i, qtd_spaces = 0;
	
	scanf("%[^\n]", a);
	
	for(i = 0; i < strlen(a); i++){
		if(a[i] == ' '){
			qtd_spaces++;
		}
	}

	printf("%d", qtd_spaces);
	
	return 0;
}
