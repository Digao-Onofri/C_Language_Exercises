/*

 	Example:  In a structure array, store the following information about 8 books: title, 
 	author, and year. Next, read an author's name and show the titles and years of the books 
 	written by him. Repeat the process until the user types "sign out". 
 	Youtube lesson: https://youtu.be/vYb1rWJZmcw
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
#define N 8

typedef struct books{
	char title[100];
	char author[50];
	int year;

} books;

int main(){
	books v[N];
	int i;
	char author[50], b[10] = "sign out";
	
	for(i = 0; i < N; i++){
		printf("Enter the book title:\n");
		scanf(" %[^\n]", v[i].title);
		printf("Enter the author:\n");
		scanf(" %[^\n]", v[i].author);
		printf("Enter the release year:\n");
		scanf(" %d", &v[i].year);
	}
	
	printf("Enter the author:\n");
	scanf(" %[^\n]", author);
	while(strcmp(author, b) != 0){ 
		printf("Books of %s:\n", author);
		for(i = 0; i < N; i++){	
			if(strcmp(v[i].author, author) == 0){
				printf("%s (%d)\n\n", v[i].title, v[i].year);
			}	
		}
		printf("\n");
		printf("Enter the author:\n");
		scanf(" %[^\n]", author);
	}
	
	return 0;
}
