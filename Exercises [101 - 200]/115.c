/*

 	Example:  Declare a vector of integers with 10 positions, read and store values at each 
 	position. Then, using an int pointer, add one unit to each position of the vector. Print the 
 	vector before and after the modification. 
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
	
	printf("-----\n");
	
	//array before add 1 to each position
	for(i = 0; i < 10; i++)
	{
		printf("%d\n", v[i]);
	}
	
	printf("-----\n");
	
	//adding 1 to each position
	for(i = 0; i < 10; i++)
	{	
		p = &v[i];
		printf("%d\n", *p + 1);
	}
	
	return 0;
}
