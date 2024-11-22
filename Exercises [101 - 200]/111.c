/*

 	Example:  Write a program that contains two integer variables. Compare your addresses and 
 	display the largest theirs. 
 	Youtube lesson: https://youtu.be/8OH84P6Z5Go
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
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
