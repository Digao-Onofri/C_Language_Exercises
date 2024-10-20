/*

 	Example:  In a structure vector, store the following information about 8 books: title, 
 	author, and year. Next, read an author's name and show the titles and years of the books 
 	written by him. Repeat the process until the user types "sign out". 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

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
	char a[50], b[7] = "go out";
	
	for(i = 0; i < N; i++){
		scanf(" %[^\n]", v[i].title);
		scanf(" %[^\n]", v[i].author);
		scanf(" %d", &v[i].year);
	}
	
	scanf(" %[^\n]", a);
	while(strcmp(a, b) != 0){
		printf("Books of %s:\n", a);
		for(i = 0; i < N; i++){	
			if(strcmp(v[i].autor, a) == 0){
				printf("%s (%d)\n\n", v[i].title, v[i].year);
			}	
		}
		printf("\n");
		scanf(" %[^\n]", a);
	}
	
	return 0;
}
