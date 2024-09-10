/*

 	Example:  Create a structure representing a student's data: enrollment, name, first test 
 	grade, second test grade, and third test grade. Next: a) enter the data of 5 students. b) 
 	find the student with the highest score in the first test, printing his full name and the 
 	grade, with 2 decimal places. c) find the student with the highest overall average, printing 
 	his full name, followed by the average, with 2 decimal places. d) print a list of enrollment 
 	and name, also saying whether each student was approved or failed, considering at least 60% 
 	of the average for approval 
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

typedef struct aluno
{
	char matr[50];
	char nome[50];
	float n1, n2, n3;
} aluno;

int main()
{
	aluno a[N];
	int i, idx = 0;
	float media = 0, nota = 0, maior;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %s", a[i].matr);
		scanf(" %[^\n]", a[i].nome);
		scanf(" %f %f %f", &a[i].n1, &a[i].n2, &a[i].n3);
	}
	
	//biggest grade in the first test
	nota = a[0].n1; 
	for(i = 0; i < N; i++)
	{
		if(a[i].n1 > nota)
		{
			nota = a[i].n1;
			idx = i;
		}
	}
	
	printf("Maior nota na P1: %.2f\n%s\n\n", nota, a[idx].nome);
	
	//searching the student with the highest average
	maior = media;
	idx = 0;
	for(i = 0; i < N; i++)
	{
		media = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(maior < media)
		{
			maior = media;
			idx = i;
		}
		media = 0;
	}
	
	printf("Maior media: %s\nValor: %.2f\n\n", a[idx].nome, maior);
	
	//Checking if the student gets the minimum average
	for(i = 0; i < N; i++)
	{   
	    media = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(media < 6.0)
		{
			printf("%s %s Reprovado\n", a[i].matr, a[i].nome);
		}
		else
		{
			printf("%s %s Aprovado\n", a[i].matr, a[i].nome);
		}	
	}
	
	return 0;
}
