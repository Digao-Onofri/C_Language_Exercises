/*

 	Example:  Read two sentences and show the difference in size between them. Your output 
 	should be in the pattern: "Sentence 1 has X characters more/less than sentence 2.
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
	char a[100], b[100];
	int answer = 0, tama, tamb;
	
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	
	printf("%lu", strlen(a));
	printf("%lu", strlen(b));
	
	if(strlen(a) > strlen(b))
	{
		answer = (strlen(a) - 1) - (strlen(b) - 1);
		printf("A frase 1 possui %d caracteres a mais que a frase 2.", answer);
	}
	else if(strlen(a) < strlen(b))
	{
		answer = (strlen(b) - 1) - (strlen(a) - 1); 
		printf("A frase 1 possui %d caracteres a menos que a frase 2.", answer);
	}

	return 0;
}
