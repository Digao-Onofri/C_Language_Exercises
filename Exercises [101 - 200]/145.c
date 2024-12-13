/*

 	Example: Make a program that receives a text file name from the user and shows on the 	
 	screen how many lines this file has. 
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
	char text[100], c;
	int idx = 0;
	
	printf("Enter your file name: ");
	scanf(" %s", text);
	
	p = fopen(text, "r");
	if(p == NULL) {
		exit(1);
	}

	while( (c = fgetc(p)) != EOF) {
		if(c == '\n') {
			idx++;
		}	
	}
	
	fclose(p);

	printf("%d\n", idx);
	
	return 0;
}
