/*

 	Example:  Make a program using pointers to order 5 numbers stored in a vector and show them 
 	ordered on the screen. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int v[5];
	int i, j, *p, *k, aux;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		p = &v[i];
		for(j = i + 1; j < 5; j++)
		{
			k = &v[j];
			if(*p > *k)
			{
				aux = *k;
				*k = *p;
				*p = aux;
				
			}
		}
	}
	
	
	for(i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}



	return 0;
}
