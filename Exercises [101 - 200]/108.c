/*

 	Example:  Make a program that reads a structure vector with the data of 8 cars: brand, price 
 	and year. Next, read a P-value and show the information for all cars with a price lower than 
 	P. Repeat this process until a P-value ≤ 0 is read. 
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
typedef struct carros
{
	char marca[50];
	float preco
	int ano;
} carros;

int main()
{
	carros v[N];
	int i;
	float price;
	
	for(i = 0; i < N; i++)
	{
		scanf(" %[^\n]", v[i].marca);  
		scanf(" %f", &v[i].preco);
		scanf(" %d", &v[i].ano);
	}
	
	scanf(" %f", &price);
	while(price > 0)
	{	
		printf("Carros maus baratos que %.2f:\n", price);
		//searching values under the price and printing on stdout
		for(i = 0; i < N; i++)
		{
			if(price > v[i].preco && price > 0)
			{
				printf("%s %.2f %.2f\n", price, v[i].marca, v[i].preco, v[i].ano);
			}
		}
		printf("\n");
		scanf("%f", &price);
	}
	
	return 0;
}
