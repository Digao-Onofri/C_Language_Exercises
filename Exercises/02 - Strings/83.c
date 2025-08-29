/*

 	Example:  Make a program that reads a sentence and counts how many vowels the sentence has 
 	in total. 
 	Youtube lesson: https://youtu.be/FT6Wpj0DDn0
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int qtd_vowels = 0, i; 
	
	scanf("%[^\n]", a);
	
	for(i = 0; i < strlen(a); i++){
		switch(a[i]){
			case 'a':
			case 'A':
				qtd_vowels++;
				break;
			case 'e':
			case 'E':
				qtd_vowels++;
				break;
			case 'i':
			case 'I':
				qtd_vowels++;
				break;
			case 'o':
			case 'O':
				qtd_vowels++;
				break;
			case 'u':
			case 'U':
				qtd_vowels++;
				break;
		}
	} 
	
	printf("%d\n",qtd_vowels);

	return 0;
}
