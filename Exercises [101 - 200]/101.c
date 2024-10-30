/*

 	Example:  Alice is very fond of the letter A. Alice classifies as harmonic string all 
 	strings where more than half of the characters are A. For example: "aaabb" and "abaa" are 
 	harmonic strings; However, "Xaya" and "Abbba" are not. Given any string (without spaces), 
 	Alice wants to erase some of its letters to make it harmonic. Alice asked for you to help
 	her write a program that informs the largest length of the resulting string after she 	
 	erases some of its letters, to make it harmonic. Consider that the entry will contain only 
 	lowercase letters and there will be at least one "a" character, so there is always an 
 	answer. 
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
	int qtda = 0, qtdx, i;
	
	printf("Enter a sentence:\n");
	scanf("%s", a);
	
	for(i = 0; i < strlen(a); i++){
		if(a[i] == 'a'){
			qtda++;
		}	
	}
	
	qtdx = strlen(a) - qtda;
	
	while(qtdx >= qtda){
		qtdx--;
	}
	
	printf("%d\n", qtdx + qtda);

	return 0;
}
