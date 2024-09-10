/*

 	Example: Utilizando um vetor de estrutura, faça um programa que leia o nome e o telefone de 
 	5 pessoas e os imprima em ordem alfabética pelo nome. Dica: pesquise os detalhes de uso da 
 	função strcmp(). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#define N 5
typedef struct cliente
{
	char nome[50];
	char telefone[50];
	
} cliente;


int main()
{	
	cliente v[N], aux;
	int i, j, check = 0;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", v[i].nome);
		scanf(" %[^\n]", v[i].telefone);
	}
	
	//organizing the clients by alphabetical order
	for(i = 0; i < N; i++)
	{
		for(j = i + 1; j < N; j++)
		{
			check = strcmp(v[i].nome, v[j].nome);
			if(check > 0)
			{	
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			} 
		}
	}
	
	//printing
	for(i = 0; i < N; i++)
	{
		printf("%s %s\n", v[i].nome, v[i].telefone);
	}
	
	
	return 0;
}
