#include <stdlib.h>
#include <stdio.h>

int main() {
	printf("Lets allocate");
	void *ptr = malloc(4);
	free(ptr);
	return 0;
}
