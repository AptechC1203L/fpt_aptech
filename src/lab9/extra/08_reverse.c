#include "../../common.h"
#include <string.h>

char *reverse(const char *string) {
	char *tmp;
	int len = strlen(string);
	int i=len-1;
	tmp = calloc(len+1, 1);
	while (i>=0) {
		tmp[len-i-1] = string[i];
		i--;
		}
	return tmp;
	}

int main(int argc, char **argv) {
	char *string1, *string2, *string3;
	if (argc !=4) {
		printf("Please input 3 strings:");
		string1 = malloc(4096);
		string2 = malloc(4096);
		string3 = malloc(4096);
		scanf("%s", string1);
		scanf("%s", string2);
		scanf("%s", string3);
		
		}
	else {
		string1 = argv[1];
		string2 = argv[2];
		string3 = argv[3];
		}
	printf("The 3 reversed strings are:\n%s\n%s\n%s\n",
	reverse(string1), reverse(string2), reverse(string3));
	return 0;
	}
