/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a perfect square number, store it in a 10 position array. So the perfect tenth square 
 	number is stored, end the reading and print, in a single line, the array elements separated 
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
int main()
{
    int array[MAX], i = 0, integer, square, root;
    
    while(i < MAX){
    	scanf("%d", &integer);
    	root = sqrt(integer);
    	square = root * root;
    	if(square == integer){
    		array[i] = integer;
    		i++;
    	}
    }

    for(i = 0; i < MAX; i++){
    	printf("%d ", array[i]);
    }

    return 0;
}
