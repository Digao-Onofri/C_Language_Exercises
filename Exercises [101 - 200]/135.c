/*

 	Example:   Make a function that takes mmm integer and returns the sum of its digits. In 
 	Moodle, enter Your full Program (Main + roles). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int soma(int num);

int main() {
	int num;
	int answer;
	
	scanf("%d", &num);

	answer = soma(num);
	
	printf("%d", answer);



	return 0;
}

int soma(int num) {
	int soma;
	
	while(num > 0) {
		soma += num % 10;
		num -= num % 10;
		num = num / 10;
	} 
		
	return soma;
}
