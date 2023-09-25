#include "./include/cli.h"
#include "./include/scale.h"

#include <stdlib.h>

int main(int argc, char **argv) {

	if ( argc == 1 ) { cliHelp(); return EXIT_SUCCESS; }

	for (int i = 1; i < argc; i++)
		sfFind(argv[i]);
	return EXIT_SUCCESS;

}
