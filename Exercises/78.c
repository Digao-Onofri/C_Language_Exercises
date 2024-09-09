/*

 	Example: Faça um programa que leia uma matriz A de inteiros (3x3). A seguir, leia uma matriz 
 	B de inteiros (4x5).Imprima, em uma linha, separados por um único espaço, os elementos de A 
 	que não estão presentes em B. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/=

#include<stdio.h>
//start of the program
int main()
{
	int a[3][3], b[4][5], i, j, k, l, control;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("-------\n");

	for(k = 0; k < 4; k++)
	{
		for(l = 0; l < 5; l++)
		{
			scanf("%d", &b[k][l]);
		}
	}

	for(i = 0; i < 3; i++)
	{
		control = 0;
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < 4; k++)
			{
				for(l = 0; l < 5; l++)
				{
					if(a[i][j] == b[k][l])
					{
						control = 1;
					}
					
				}
				if(control == 0)
				{
					printf("%d ", a[i][j]);
					break;
				}
			}
			
		}
	}

	return 0;
}
