/*

 	Example:  Do a role that receives three grades from a student and one letter. If the letter 
 	is 'A', the function must calculate the arithmetic average of the student's grades; if it is 
 	'P', it must calculate the weighted average, with weights 5, 3 and 2. In Moodle, enter your 
 	full program (main + roles). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

void aritmetica(float n1, float n2, float n3);
void media_ponderada(float n1, float n2, float n3);

int main() {
	float n1, n2, n3; 
	char letra;
	
	scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
	
	if(letra == 'A') {
		aritmetica(n1, n2, n3);
	}
	else {
		media_ponderada(n1, n2, n3);
	}

	return 0;
} 

void aritmetica(float n1, float n2, float n3) {
	printf("%.2f", (n1 + n2 + n3) / 3);	
}

void media_ponderada(float n1, float n2, float n3) {
	printf("%.2f", ( (n1 * 5) + (n2 * 3) + (n3 * 2) ) / 10);
}
