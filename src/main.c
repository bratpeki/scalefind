#include "./include/cli.h"
#include "./include/scale.h"

#include <stdlib.h>

int main(int argc, char **argv) {

	if ( argc == 1 ) { cliHelp(); return EXIT_SUCCESS; }

	/* TODO: Identify individual arguments, don't output as one wall of text */

	for (int i = 1; i < argc; i++)
		sfFind(argv[i]);
	return EXIT_SUCCESS;

}
