#include <stdio.h>
extern char** environ;

int main(void) {
	size_t i; 
	for (i = 0; environ[i] != NULL; i++) {
		printf("%s\n", environ[i]);
	}
	return 0;
}
