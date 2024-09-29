/*

 	Example:  Make a program that reads a sentence and check if the sentence is a palindrome, 
 	that is, the same when read from left to right and from right to left. Disregard the spaces 
 	in the sentence during the check. Your program should only print "yes" or "no" as an answer. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100], b[100], c[100];
	int i, j, k;
	
	scanf("%[^\n]", a);
	
	//removing the spaces and reading by back to front
	for(i = strlen(a) - 1, j = 0; i >= 0; i--){	
		if(a[i] != ' '){
			b[j] = tolower(a[i]);
			j++;
		}
	}
	
	b[j] = '\0';
	
	//removing the spaces 
	for(i = 0, k = 0; i <= strlen(a); i++){
		if(a[i] != ' '){
			c[k] = tolower(a[i]); 
			k++;
		}
	}

	//comparison
	if(strcmp(c, b) == 0){
	    printf("yes\n");
	}
	else{
	    printf("no\n");
	}
	
	return 0;
}
