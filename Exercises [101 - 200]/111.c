/*

 	Example:  Write a program that contains two integer variables. Compare your addresses and 
 	display the largest theirs. 
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
	void *p = NULL, *i = NULL;
	
	p = &a; //Will point to the memory adress of a
	i = &b; //Will point to the memory adress of b
	
	if(p > i){ 
		printf("%p\n", p);
	}
	else{
		printf("%p\n", i);
	}

	return 0;
}
