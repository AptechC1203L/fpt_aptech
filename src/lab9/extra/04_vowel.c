#include "../../common.h"
#include <malloc.h>
#include <string.h>

int count_vowel(char *string)
{
	int i, count=0;
	for (i=0; i < strlen(string); i++)
	switch(string[i])
	{
		case 'a':
		case 'e':
		case 'u':
		case 'i':
		case 'o':
			count++; break;
		default:;
	}
	return count;
}

int main (int argc, char ** argv)
{

	char *string;
	string = malloc(1024);
	printf("Please input a string:");
	scanf("%s", string);
	printf("Number of vowels: %d", count_vowel(string));
	return 0;

}
