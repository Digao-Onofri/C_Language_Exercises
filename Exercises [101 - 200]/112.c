/*

 	Example: Write a program that contains two integer variables. Read these variables, compare 
 	your addresses, and display the contents of the largest address  
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
	int a, b;
	int *p = NULL, *i = NULL;
	
	scanf("%d %d", &a, &b);
	
	p = &a;
	i = &b;
	
	if(p > i)
	{
		printf("%p", p);
	}
	else
	{
		printf("%p", i);
	}

	return 0;
}
