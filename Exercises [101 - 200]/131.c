/*

 	Example:  Do a function that receives three grades from a student and one letter. If the letter 
 	is 'A', the function must calculate the arithmetic average of the student's grades; if it is 
 	'P', it must calculate the weighted average, with weights 5, 3 and 2.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

void arithmetic(float n1, float n2, float n3);
void weighted(float n1, float n2, float n3);

int main() {
	float n1, n2, n3; 
	char letter;
	
	printf("Enter three grades and a letter:\n");
	scanf("%f %f %f %c", &n1, &n2, &n3, &letter);
	
	if(letter == 'A' || letter == 'a') {
		arithmetic(n1, n2, n3);
	}
	else if(letter == 'P' || letter == 'p') {
		weighted(n1, n2, n3);
	}

	return 0;
} 

void arithmetic(float n1, float n2, float n3) {
	printf("Arithmetic average: %.2f\n", (n1 + n2 + n3) / 3);	
}

void weighted(float n1, float n2, float n3) {
	printf("Weighted average: %.2f\n", ( (n1 * 5) + (n2 * 3) + (n3 * 2) ) / 10);
}
