/*

 	Example:  Create a structure to store a student's data: name, enrollment number, and course. 
 	Read the information from 5 students and store it in a vector of this structure. Next, print 
 	the data of all students on the screen. Follow the output format shown in Moodle. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define N 5

typedef struct aluno
{
	char nome[100];
	char numm[100];
	char curso[100];
} aluno;

int main()
{
	aluno a[N];
	int i;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", a[i].nome);
		scanf(" %s", a[i].numm);
		scanf(" %[^\n]", a[i].curso);
	}
	
	for(i = 0; i < N; i++)
	{
		printf("Aluno %d:\nNome: %s\nMatricula: %s\nCurso: %s\n\n", i + 1, a[i].nome, a[i].numm, a[i].curso);
	}

	return 0;
}
