/*

 	Example:  Read two sentences and show the difference in size between them. Your output 
 	should be in the pattern: "Sentence 1 has X characters more/less than sentence 2.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int answer = 0, lenght_a, lenght_b;

	printf("Enter the sentence 1:\n");
	scanf("%[^\n]", a);
	printf("Enter the sentence 2:\n");
	scanf(" %[^\n]", b);

	// We use -1 to reduce the least place that have the \0
	lenght_a = strlen(a) - 1;
	printf("The lenght of sentence 1 is: %d\n", lenght_a);
	lenght_b = strlen(b) - 1;
	printf("The lenght of sentence 2 is: %d\n", lenght_b);  
	
	if(lenght_a > lenght_b){
		answer = lenght_a - lenght_b;
		printf("Sentence 1 has %d characters more than sentence 2\n", answer);
	}
	else if(lenght_a < lenght_b){
		answer = lenght_b - lenght_a; 
		printf("Sentence 2 has %d characters more than sentence 1\n", answer);
	}
	else if(lenght_a == lenght_b) {
	   printf("The sentences has the same amount of characters\n");
	}

	return 0;
}
