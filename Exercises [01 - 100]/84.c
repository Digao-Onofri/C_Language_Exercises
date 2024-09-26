/*

 	Example:Make a program that reads a sentence and counts how many vowels the sentence has in 
 	total.
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
