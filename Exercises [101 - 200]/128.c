/*

 	Example:  Make a program that reads numbers from the keyboard and stores them in an 
 	allocated vector dynamically. The user will enter a sequence of numbers, with no limit, and 
 	the entry of a negative value ends the reading. The data should be stored in memory as 
 	follows: • Start with a dynamically allocated vector of size 10. • After this vector is 
 	full, allocate a new vector of the size of the previous vector by adding space for 10 more 
 	positions. • Copy the previously typed values to this new, larger area and free up the 
 	initial memory. • Repeat the procedure of dynamically expanding with 10 more values whenever 
 	the vector is full. 
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
	int *p = NULL;
	int *q = NULL;
	int *t = NULL;
	int x, i, qtd, tam;
	
	p = malloc(tam * sizeof(int));
	
	scanf("%d", &x);
	while( x > 0) {
		p[qtd] = x;
		qtd++;
		if(qtd % 10 == 0) {		
			tam += 10;
			q = malloc(tam * sizeof(int));
			for(i = 0; i < tam -1; i++) q[i] = p[i];
			t = p;
			p = q;
			q = t;
		
			free(q);
			t = q = NULL;
		}
		
		scanf("%d", &x);
	}
	
	for(i = 0; i < qtd; i++) printf(">> %d\n", p[i]);

	free(p);
	
	return 0;
}
