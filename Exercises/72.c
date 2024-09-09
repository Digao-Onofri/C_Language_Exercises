/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a number perfect square, store it in a 10 position vector. So the perfect tenth square 
 	number is stored, end the reading and print, in a single line, the vector elements separated 
 	from each other for a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<math.h>
#define MAX 10
//start of the program
int main()
{
    int n[MAX], i, x, mult, raiz;
    
    i = 0;
    
    while(i < MAX)
    {
    	scanf("%d", &x);
    	raiz = sqrt(x);
    	mult = raiz * raiz;
    	if(mult == x)
    	{
    		n[i] = x;
    		i++
    	}
    }

    for(i = 0; i < MAX; i++)
    {
    	printf("%d ", n[i]);
    }

    
    return 0;
}
