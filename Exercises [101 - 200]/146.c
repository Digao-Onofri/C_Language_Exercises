/*

 	Example:   Make a program that receives a text file from the user and shows on the screen 
 	how many letters are vowels. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *p = NULL;
	char text[20], c;
	int idx;
	
	printf("Enter the name of your File: ");
	scanf("%s", text);
	
	p = fopen(text, "r");
	
	fscanf(p, "%c", &c);
	while( !feof(p)) {
		if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ) idx++;
		fscanf(p, "%c", &c);
	}
	
	fclose(p);
	
	printf("%d\n", idx);	
	return 0;
}
