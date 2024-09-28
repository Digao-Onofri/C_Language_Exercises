/*

 	Example:Make a program that reads a sentence and counts how many specific vowels the sentence
  	has in total.
 	Youtube lesson: https://youtu.be/1vs2jG6GA78
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int qtda, qtdo, qtdu, qtdi, qtde, i; 
	
	scanf("%[^\n]", a);
	
	qtda = qtde = qtdu = qtdi = qtdo = 0;
	
	for(i = 0; i < strlen(a); i++){
		switch(a[i]){		
			case 'a':
			case 'A':
				qtda++;
				break;
			
			case 'e':
			case 'E':
				qtde++;
				break;
			
			case 'o':
			case 'O':
				qtdo++;
				break;
			
			case 'i':
			case 'I':
				qtdi++;
				break;
			
			case 'u':	
			case 'U':
				qtdu++;
				break;		
		}
	} 
	
	printf("A = %d \nE = %d \nI = %d \nO = %d \nU = %d\n", qtda, qtde, qtdi, qtdo, qtdu);

	return 0;
}
