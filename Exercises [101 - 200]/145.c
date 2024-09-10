/*

 	Example:  2) Make a program that receives a text file from the user and shows on the screen 
 	how many lines this file Has. 
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
	char t[100], c;
	int i = 0, idx = 0;
	
	printf("Enter your text: ");
	scanf(" %[^\n]", t);
	
	p = fopen("arq.txt", "w");
	if(!p) exit(1);
	
	fprintf(p, "%s", t);
	fflush(p);

	while( (c = fgetc(p)) != EOF) {
		if(c == '\n') {
			idx++;
		}	
	}
	
	fclose(p);

	printf("%d\n", idx);
	
	return 0;
}
