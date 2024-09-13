/*

 	Example:  Make a program that reads a sentence (string) containing 4 real numerical double-
 	precision values, separated by spaces. Next, your program must separate each number from 
 	the others, convert it to numerical format, and display the sum of the numbers. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h> 
#include<stdlib.h> 
int main()
{
	char sentence[100], a[5], b[5], c[5], d[5];
	int i = 0, j = 0, k = 0, l = 0, qtd = 0, flag = 0;
	double valuea = 0, valueb = 0, valuec = 0, valued = 0, sum = 0;
	
	printf("Enter 4 real values:\n");
	scanf("%[^\n]", sentence);
	
	for(i = 0; i < strlen(sentence); i++){ //separating the values in 4 different arrays
		if(sentence[i] == ' '){
			qtd++;
		}
		if(qtd == 0) {
			a[i] = sentence[i];
		}
		if(qtd == 1){
			b[j] = sentence[i + 1];
			j++;
		}
		if(qtd == 2){
			c[k] = sentence[i + 1];
			k++;
		}
		if(qtd == 3){
			d[l] = sentence[i];
			l++;
		}
	}

	for(i = 0; i < strlen(a); i++){ //calculating the first value
		if(a[i] == '.'){
			valuea = atof(a);
			flag++;
		}
		if(flag == 0){
			valuea = atoi(a);
		}	
	}
	
	flag = 0; //setting the value of the flag to zero again
	
	for(j = 0; j < strlen(b); j++){ //calculating the second value
		if(b[j] == '.'){
			valueb = atof(b);
			flag++;
		}
		if(flag == 0){
			valueb = atoi(b);
		}
	}
	
	flag = 0;
	
	for(k = 0; k < strlen(c); k++){ //calculating the third value
		if(c[k] == '.'){
			valuec = atof(c);
			flag++;
		}
		if(flag == 0){
			valuec = atoi(c);
		}
	}
	
	flag = 0;
	
	for(l = 0; l < strlen(d); l++){ //calculating the fourth value
		if(d[l] == '.'){
			valued = atof(d);
			flag++;
		}
		if(flag == 0){
			valued = atoi(d);
		}
	}

	sum = valuea + valueb + valuec + valued;
	
	printf("%.2lf\n", sum);

	return 0;
}
