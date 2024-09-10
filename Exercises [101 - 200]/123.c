/*

 	Example:  Make a program that reads 15 lottery numbers (between 1 and 25) bet by the user. 
 	Then, randomly generate the 15 numbers drawn. Next, check how many numbers the user matched 
 	and dynamically create a vector of equal size to the number of hits. Using pointer 
 	arithmetic, store the numbers hit in this vector and then show the result. and how many are 
 	odd. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {	
	int i, j, idx, check = 0, flag, qtd;
	int *v, *p, *a;
	int s[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	v = malloc(15 * sizeof(int));	
	
	for(i = 0; i < 15; i++) {
		scanf(" %d", (v + i));
	}
	
	p = malloc(15 * sizeof(int));
	srand(time(NULL));
	
	idx = rand() % 25; //return an integer between 0 to 24
	*(p + j) = s[idx];
	printf("\n%d ", *(p + j));
	check++;
	while(check < 15) {
		idx = rand() % 25; 
		flag = 0;
		for(j = 0; j <= check; j++) {
			if(s[idx] == *(p + j)) {
				flag = 1;
			}
		}
		if(flag == 0)
		{
			*(p + check) = s[idx];
			printf("%d ", *(p + check));
			check++;
			
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 15; j++)
			if(*(p + j) == *(v + i))
			{
				qtd++;
			}
	}
	
	a = malloc(qtd * sizeof(int));
	
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 15; j++)
			if(*(p + j) == *(v + i))
			{
				printf("%d ", *(v + i));
			}
	}
	
	free(v);
	free(p);
	free(a);
	
	
	return 0;
}
