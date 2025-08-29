/*

 	Example:  Make a program that reads 4 integers in string format, computes the sum of the 
 	numbers read, converts the result to another string, and shows the string that contains the 
 	result. 
 	Youtube lesson: https://youtu.be/1yjgOaQ2Rfg
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[5], b[5], c[5], d[5], answer[5]; 
	int valuea, valueb, valuec, valued, sum;
	
	printf("Enter 4 integers:\n");
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	scanf("%s", d);
	
	sscanf(a, "%d", &valuea);
	sscanf(b, "%d", &valueb);
	sscanf(c, "%d", &valuec);
	sscanf(d, "%d", &valued);
	
	sum = valuea + valueb + valuec + valued;
	
	sprintf(answer, "%d", sum);
	
	printf("The answer is: %s\n", answer);
	
	return 0;
}	
