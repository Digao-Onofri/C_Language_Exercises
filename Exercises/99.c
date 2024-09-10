/*

 	Example:  Make a program that takes a sentence and shows the number of lowercase and 
 	uppercase letters typed. Print the two values on one line, separated by a single space. 
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
	int i, QTD, qtd;
	
	fgets(a, 100, stdin);
	
	QTD = qtd = 0;
	
	for(i = 0; i < strlen(a); i++)
	{
		if(isupper(a[i]) && a[i] != ' ')
		{
			QTD++;
		}
		else if(islower(a[i]) && a[i] != ' ')
		{
			qtd++;
		}
		
	}
	
	printf("%d %d", qtd, QTD);

	return 0;
}
