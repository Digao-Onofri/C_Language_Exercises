/*

 	Example:  Make a program that reads 15 lottery numbers (between 1 and 25) bet by the user. 
 	Then, randomly generate the 15 numbers drawn. Next, check how many numbers the user matched 
 	and dynamically create an array of equal size to the number of hits. Using pointer 
 	arithmetic, store the numbers hit in this array and then show the result. And how many are 
 	odd. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the betideo description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {	
	int i = 0, j = 0, adress = 0, check = 0, flag = 0, qtd = 0, even = 0;
	int *bet, *p;
	int s[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	//allocating memory for the input array
	bet = malloc(15 * sizeof(int));
	printf("Enter 15 bet values between 1 to 25\n");
	for(i = 0; i < 15; i++) {
		scanf(" %d", (bet + i));
	}
	
	//allocating memory for the array with random values
	p = malloc(15 * sizeof(int));

	/*return a value with the amount 
	of seconds since their creation*/
	srand(time(NULL)); 
	/*return an integer between 0 to 24 with
	the remainder of the division by 25 */
	adress = rand() % 25; 
	//set the value placed in the adress generated 
	*(p + j) = s[adress]; 
	printf("Numbers generated:\n");
	printf("%d ", *(p + j));
	check++;
	//creating 15 different values
	while(check < 15) {
		adress = rand() % 25; 
		flag = 0;
		for(j = 0; j <= check; j++) {
			if(s[adress] == *(p + j)) {
				flag = 1;
			}
		}
		if(flag == 0){
			*(p + check) = s[adress];
			printf("%d ", *(p + check));
			check++;	
		}
	}
	
	printf("\n");
	/*calculating the quantity of values 
	in the bet that had randomly generated */
	for(i = 0; i < 15; i++){
		for(j = 0; j < 15; j++)
			if(*(p + j) == *(bet + i)){
				qtd++;
				if(*(p + j) % 2 == 0){
					even++;
				}
			}
	}
	
	//printing the values that the guy guessed correctly
	printf("Numbers guessed correctly:\n");
	for(i = 0; i < 15; i++){
		for(j = 0; j < 15; j++)
			if(*(p + j) == *(bet + i)){
				printf("%d ", *(bet + i));
			}
	}

	printf("\nAmount of even numbers sorted: %d\n", even);
	
	//free the memory that had used in the arrays
	free(bet);
	free(p);
	
	return 0;
}
