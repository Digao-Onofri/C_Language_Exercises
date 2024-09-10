/*

 	Example:  In a structure vector, store the following information about 8 books: title, 
 	author, and year. Next, read an author's name and show the titles and years of the books 
 	written by him. Repeat the process until the user types "sign out". 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#define N 8

typedef struct livros
{
	char titulo[100];
	char autor[50];
	int ano;

} livros;

int main()
{
	livros v[N];
	int i;
	char a[50], b[5] = "sair";
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", v[i].titulo);
		scanf(" %[^\n]", v[i].autor);
		scanf(" %d", &v[i].ano);
	}
	
	scanf(" %[^\n]", a);
	while(strcmp(a, b) != 0)
	{
		printf("Livros de %s:\n", a);
		for(i = 0; i < N; i++)
		{	
			if(strcmp(v[i].autor, a) == 0)
			{
				printf("%s (%d)\n\n", v[i].titulo, v[i].ano);
			}	
		}
		printf("\n");
		scanf(" %[^\n]", a);
	}
	
	return 0;
}
