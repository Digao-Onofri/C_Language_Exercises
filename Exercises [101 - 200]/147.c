/*

 	Example:  1) Write a program that: 
	• Create/open a text file named "file.txt" 
	• Allow the user to write multiple characters to this file, until the user type the
	caracter '0'
	• Close the file. 
	Now, open and read the file, character by character, and write on the screen 
 	all the stored characters. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

void write();
 
int main() {
	FILE *p = NULL;
	char c[100];
	int i = 0;
	
	p = fopen("file.txt", "w");
	
	if(!p){
		exit(1);
	}
	
	printf("Enter a sentence:\n");
	scanf(" %c", &c[i]);
	fprintf(p, "%c", c[i]);
	
	while(c[i] != '0') {
		i++;
		scanf(" %c", &c[i]);
		if(c[i] == '0'){
			break;
		}
		fprintf(p, "%c", c[i]);
	}
	
	fclose(p);
	write();

	return 0;
}

void write () {
	FILE *p = NULL;
	char string[1000];

	p = fopen("file.txt", "r");
	
	if(!p) exit(1);

	printf("Text: \n");
	
	fscanf(p, "%s", string);
	printf("%s", string);
	
	printf("\n");
	fclose(p);	
}
