/*

 	Example: Declare um vetor de inteiros com 10 posições, leia e armazene valores em cada 
 	posição. A seguir, utilizando apenas ponteiros de int troque o segundo maior elemento de 
 	posição com o segundo menor elemento. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int v[10], aux, *sma, *sme, *ma, *me;
	int i;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	ma = me = sma = sme = v;
	
	for(i = 0; i < 10; i++)
	{
		if(*ma < v[i])
		{
			sma = ma;
			ma = &v[i];
			printf("ma!! %d %d %d\n", i, *sma, *ma);
		}
		else if(*sma < v[i])
		{
			sma = &v[i]; 
			printf("sma!! %d %d %d\n", i, *sma, *ma);
		}
		
		if(*me > v[i])
		{
			sme = me;
			me = &v[i];
			printf("me!! %d %d %d\n", i, *sme, *me);
		}
		else if(*sme > v[i])
		{
			sme = &v[i]; 
			printf("sme!! %d %d %d\n", i, *sme, *me);
		}
		
	}
	
	aux = *sma;
	*sma = *sme;
	*sme = aux;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d", v[i]);
	}
	
	return 0;
}
