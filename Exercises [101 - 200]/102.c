/*

 	Example:  Alice created an S string with only lowercase letters of the alphabet. From S, she 
 	defined an S' string by removing all the letters "a" from S, and keeping the remaining 
 	letters in the order in which they appear. Then, Alice formed a new string T by 
 	concatenating the strings S and S', that is: T = S + S'. For instance:
 	S = "pineapple" 
 	S' = "bcxi" 
 	T = "pineapplebcxi" 
 	Given the string T as input, your task is to find the string S 
 	that Alice used to produce T. Consider that there will be no spaces in the input string. In 
 	addition, the input string can contain between 1 and 105 characters. If there is no response 
 	to the input provided, print -1. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char t[100000], a[100000], b[100000], ss[100000];
	int i, j, k, check = 0;
	
	scanf("%s", t);
	
	for(i = 0, j = 0; i < strlen(t); i++)
	{
		if(t[i] != 'a')
		{
			ss[j] = t[i];
			j++;
		}
	}
	
	for(j = 0; j < strlen(ss) / 2; j++)
	{
		a[j] = ss[j];
	}
	
	for(j = strlen(ss) / 2, k = 0; j <= strlen(ss); j++, k++)
	{
		b[k] = ss[j];
	}
	
	//comparison
	for(j = 0, k = 0; j < strlen(b); j++, k++)
	{
		if(a[j] != b[k])
		{
			check = 1;
		}
	}
	
	if(strlen(ss) % 2 == 1 || check == 1)
	{
		printf("-1");
		return 0;
	}
	else if(check == 0)
	{
		for(i = 0; i < strlen(t) - (strlen(ss) / 2); i++)
		{
			printf("%c", t[i]);
		}
	}
	
	return 0;
}
