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
	
	printf("Enter the values for a and b:\n");
	scanf("%d %d", &a, &b);
	
	p = &a;
	i = &b;
	
	if(p > i){
		printf("%d\n", *p);
	}
	else{
		printf("%d\n", *i);
	}

	return 0;
}
