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
#include<ctype.h>
int main()
{
	char a[100];
	int qtd_vowels, i; 
	
	scanf("%[^\n]", a);
	
	qtd = 0;
	
	for(i = 0; i < strlen(a); i++){
		if(islower(a[i])){
			if(a[i] == 'a' || a[i] == 'o' || a[i] == 'e' || a[i] == 'i' || a[i] == 'u'){
				qtd_vowels++;
			}
		}
		else{
			if(a[i] == 'A' || a[i] == 'O' || a[i] == 'E' || a[i] == 'I' || a[i] == 'U'){
				qtd_vowels++;
			}
		}
		
	} 
	
	printf("%d\n",qtd_vowels);

	return 0;
}
