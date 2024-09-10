/*

 	Example:  Make a program that reads a sentence and counts how many vowels the sentence has 
 	in total. 
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
