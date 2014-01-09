#include <stdio.h>
#include <string.h>

char *str_replace(char initial[], char replace[], char with[], char dest[])
{
	int i = 0;
	int r = 0;

	int index_count = 0;
	int pos_indexes[100];

	int initial_length = 0;

	// TODO: Replace hardcoded 100
	char fully_formed_string[100];

	for (i = 0; i < strlen(initial);) {
		if (initial[i] != replace[r]) {
			r++;
		} else {
			fully_formed_string[i] = replace[i];
			i++; r++;
			
			if (strcmp(fully_formed_string,replace) == 0) {

				for (int rep = 0; rep < index_count; rep++) {
					initial[pos_indexes[rep]] = with[rep];
				}

				int final_string_count = 0;
				while (strlen(initial) != strlen(dest)) {
					dest[final_string_count] = initial[final_string_count];
					final_string_count++;
				}
			}
			pos_indexes[index_count] = i;
			index_count++;
			
		}
	}
	dest = initial;
	initial = "";
	return dest;
}

int main()
{
	char name[] = "Harry";
	char rep[] 	= "Harry";
	char with[] = "Lewis";
	char dest[10];

	str_replace(name, rep, with, dest);

	printf("String: %s\n", dest);

	return 0;
}