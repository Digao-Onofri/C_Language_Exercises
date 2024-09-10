/*

 	Example:  Declare a vector of integers with 10 positions, read and store values at each 
 	position. Then, using only int pointers, add one unit to the content of each position of the 
 	vector if the content is even; multiply by 2 if it is odd. 
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
	int v[10], *p, i;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		p = &v[i];
		if(*p % 2 == 0)
		{
			*p = *p + 1;
			printf("%d\n", *p);
		}
		else
		{
			*p = *p * 2;
			printf("%d \n", *p);
		}
	}
	
	return 0;
}
