/*

 	Example:  Make a program that reads numbers from the keyboard and stores them in an 
 	allocated array dynamically. The user will enter a sequence of numbers, with no limit, and 
 	the entry of a negative value ends the reading. The data should be stored in memory as 
 	follows: • Start with a dynamically allocated array of size 10. • After this array is 
 	full, allocate a new array of the size of the previous array by adding space for 10 more 
 	positions. • Copy the previously typed values to this new, larger area and free up the 
 	initial memory. • Repeat the procedure of dynamically expanding with 10 more values whenever 
 	the array is full. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int *first = NULL;
	int *new = NULL;
	int x, i, qtd, lenght = 10;
	
	first = (int *)malloc(lenght * sizeof(int));
	if(first == NULL){
		exit(1);
	}
	
	scanf("%d", &x);
	while(x > 0) {
		first[qtd] = x;
		qtd++;
		if(qtd % 10 == 0) {	
			new = (int *)malloc(lenght * sizeof(int));
			if(new == NULL){
				exit(1);
			}
			for(i = 0; i < lenght; i++) {
				new[i] = first[i];
			}
			free(first);
			lenght += 10;
			first = (int *)malloc(lenght * sizeof(int));
			if(first == NULL){
				exit(1);
			}
			for(i = 0; i < lenght - 10; i++) {
				first[i] = new[i];
			}
			free(new);
		}
		scanf("%d", &x);
	}
	
	for(i = 0; i < qtd; i++) {
		printf(">> %d\n", first[i]);
	}
	free(first);

	return 0;
}
