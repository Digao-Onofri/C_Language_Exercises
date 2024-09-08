/*

 	Example: Make a program that reads 10 integers and stores them in an array. Then print in a 
 	single line which are the smallest, the second smallest and the third smallest elements 
 	present in the array, separated between for a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include <stdio.h>
#define MAX 10
int main()
{
    int array[MAX];
    int i, j, aux;

    for(i = 0; i < MAX; i++){
    	printf("Enter the value placed in the position [%d]:\n", i);
        scanf("%d", &array[i]);
    }
    
    //organizing the values in the array by the smallest to the largest
    for(i = 0; i < MAX; i++){
        for(j = i + 1; j < MAX; j++){
            if(array[i] > array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    
    printf("The first three smallest values in the vector are: %d, %d and %d\n", array[0], array[1], array[2]);

    return 0;
}
