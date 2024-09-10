/*

 	Example:  Make a program that declares a structure for the registration of N students, where 
 	the user informs N. Store the following information about the students: enrollment, full 
 	name, and date of birth. Using pointer arithmetic, read the information from N students, and 
 	then show the name of the oldest student and the youngest student. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>

typedef struct cadastro {
	char mat[50];
	char nome[50];
	int nas;
} cadastro;

int main() {
	int N;
	printf("Amount of registers:\n");
	scanf("%d", &N);
	
	cadastro v[N];
	int i, *p, idx = 0, mn = 0;
	
	for(i = 0; i < N; i++) {
		scanf(" %s", &v[i].mat);
		scanf(" %[^\n]", &v[i].nome);
		scanf(" %d", &v[i].nas);
	}
	
	for(i = 0; i < N; i++) {
		p = &v[i].nas;
		if(*p < v[i + 1].nas) {
			idx++;
			mn = i;
		}
	}
	
	printf("Oldest: %s\n", v[mn].nome);
	printf("Newest: %s\n", v[idx].nome);

	return 0;
}
