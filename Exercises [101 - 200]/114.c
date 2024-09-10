/*

 	Example:  Declare a vector of integers with 10 positions, read and store values at each 
 	position. Below Using an int pointer, display the address and contents of each position in 
 	the vector. 
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
	int v[10], i;
	int *p;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		p = &v[i];
		printf("%p %d\n", p, *p);
	}
	
	return 0;
}
