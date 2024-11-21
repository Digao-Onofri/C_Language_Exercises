/*

 	Example: Using a structure array, make a program that reads the name and phone number of 
	5 people and print them alphabetically by name. Tip: Search for the usage details of 
	strcmp() function.
 	Youtube lesson: https://youtu.be/lAGm0-218xU
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#define N 5

typedef struct client{
	char name[50];
	char phone[50];
	
} client;

int main(){	
	client array[N], aux;
	int i, j, check = 0;
	
	for(i = 0; i < N; i++){
		printf("Enter your name:\n");
		scanf(" %[^\n]", array[i].name); 
		printf("Enter you phone:\n");
		scanf(" %[^\n]", array[i].phone);
	}
	
	//organizing the clients by alphabetical order
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			check = strcmp(array[i].name, array[j].name);
			if(check > 0){	
				aux = array[i]; 
				array[i] = array[j];
				array[j] = aux;
			} 
		}
	}
	
	//printing the names in alphabetical order
	for(i = 0; i < N; i++){
		printf("%s %s\n", array[i].name, array[i].phone);
	}
	
	return 0;
}
