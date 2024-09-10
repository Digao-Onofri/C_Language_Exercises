/*

 	Example:  1) Write a program that: • Create/open a text file named "arq.txt" • Allow the 
 	user to write multiple characters to this file, until the user enters the Character '0' • 
 	Close the file. Now, open and read the file, character by character, and write on the screen 
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

void write(p);
 
int main() {
	FILE *p = NULL;
	char c[100];
	int i = 0;
	
	p = fopen("arq.txt", "w");
	
	if(!p) exit(1);
	
	scanf(" %c", &c[i]);
	fprintf(p, "%c", c[i]);
	
	while(c[i] != '0') {
		i++;
		scanf(" %c", &c[i]);
		fprintf(p, "%c", c[i]);
	}
	
	fclose(p);
	
	write();

	return 0;
}

void write() {
	FILE *p = NULL;
	char c[100];
	int i = 0; 
	
	p = fopen("arq.txt", "r");
	
	if(!p) exit(1);

	printf("Caracteres: \n");
	
	fscanf(p, "%c", &c[i]);
	printf("%c", c[i]);
	
	while( !feof(p) ) {
		i++;
		fscanf(p, "%c", &c[i]);
		printf("%c", c[i]);
	}
	
	printf("\n");
	fclose(p);	
}
