/*

 	Example:  Make a program that takes a sentence and shows the number of lowercase and 
 	uppercase letters typed. Print the two values on one line, separated by a single space. 
 	Youtube lesson: https://youtu.be/m8QKf886Pzc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char string[100];
	int i, QTD, qtd;
	
	printf("Enter a sentence:\n");
	scanf("%[^\n]", string);
	
	QTD = qtd = 0;
	
	for(i = 0; i < strlen(string); i++){
		if(isupper(string[i]) && string[i] != ' '){
			QTD++;
		}
		else if(islower(string[i]) && string[i] != ' '){
			qtd++;
		}
		
	}
	
	printf("The amount of lower caracters are: %d\n", qtd);
	printf("The amount of upper caracters are: %d\n", QTD);

	return 0;
}
