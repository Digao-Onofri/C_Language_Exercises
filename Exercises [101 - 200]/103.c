/*

 	Example:  Make a program that reads a person's name, age, and address (street and number) 
 	and stores the data in a structure. Show stored information on the screen 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

typedef struct endereco
{
	char rua[100];
	int num;
} endereco;
typedef struct pessoa
{
	char nome[50];
	int idade;
	endereco ender;
	
}pessoa;

int main()
{
	pessoa a;
	
	scanf("%[^\n]", a.nome);
	scanf(" %d", &a.idade);
	scanf(" %[^\n]", a.ender.rua);
	scanf(" %d", &a.ender.num);
	
	printf("Nome: %s\nIdade: %d\nEndereco: %s, %d", a.nome, a.idade, a.ender.rua, a.ender.num);

	return 0;
}
