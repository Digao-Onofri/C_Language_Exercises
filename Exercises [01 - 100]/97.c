/*

 	Example:  Make a program that receives a sentence and shows the number of words typed in the 
 	sentence. 
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
	char string[100];
	int i, qtd_words = 0;
	
	printf("Enter a sentence:\n");
	scanf("%[^\n]", string);
	
	for(i = 0; i < strlen(string); i++){
		if(string[i] == ' '){
			qtd_words++;
		}
	}

	printf("The number of words are: %d\n", qtd_words + 1);

	return 0;
}
