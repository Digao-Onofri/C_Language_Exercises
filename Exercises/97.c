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
	char a[100];
	int i, qtd = 0;
	
	fgets(a, 100, stdin);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			qtd++;
		}
	}

	printf("%d", qtd + 1);

	return 0;
}
