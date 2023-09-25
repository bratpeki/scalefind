#include "./include/cli.h"
#include "./include/scale.h"

#include <stdlib.h>

int main(int argc, char **argv) {

	for (int i = 1; i < argc; i++)
		sfFind(argv[i]);

	return EXIT_SUCCESS;

}
